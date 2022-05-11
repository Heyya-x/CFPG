#include <bits/stdc++.h>
using namespace std;

struct item {
	long long seg, pre, suf, sum;
};

struct SegTree {
	int size;
	vector<item> values;
	vector<long long> operation;
	
	int init(int n) {
		size = 1;
		while (size < n) size *= 2;
		values.resize(2 * size);
		operation.assign(2 * size, LLONG_MAX);
		return size;
	}
	
	item modify_op(long long v, long long len) {
		//if (v < 0) v = 0;
		return {v * len, v * len, v * len, v * len};
	}

	item apply_op(item a, item b) {
		return {
			max(a.seg, max(a.suf + b.pre, b.seg)),
			max(a.pre, a.sum + b.pre),
			max(a.suf + b.sum, b.suf),
			a.sum + b.sum
		};
	}

	void lazy_modify(int x, int lx, int rx) {
		if ((rx - lx == 1) || operation[x] == LLONG_MAX) return;
		int mid = (lx + rx) / 2;
		values[2 * x + 1] = values[2 * x + 2] = modify_op(operation[x], rx - mid);
		operation[2 * x + 1] = operation[2 * x + 2] = operation[x];
		operation[x] = LLONG_MAX;
	}
	
	void modify(int l, int r, long long v, int x, int lx, int rx) {
		lazy_modify(x, lx, rx);
		if (r <= lx || rx <= l) return;
		if (l <= lx && rx <= r) {
			values[x] = modify_op(v, rx - lx);
			operation[x] = v;
			return;
		}
		int mid = (lx + rx) / 2;
		modify(l, r, v, 2 * x + 1, lx, mid);
		modify(l, r, v, 2 * x + 2, mid, rx);
		values[x] = apply_op(values[2 * x + 1], values[2 * x + 2]);
	}
	
	item query(int l, int r, int x, int lx, int rx) {
		lazy_modify(x, lx, rx);
		if (r <= lx || rx <= l) return {0, 0, 0, 0};
		if (l <= lx && rx <= r) {
			return values[x];
		}
		int mid = (lx + rx) / 2;
		item s1 = query(l, r, 2 * x + 1, lx, mid);
		item s2 = query(l, r, 2 * x + 2, mid, rx);
		return apply_op(s1, s2);
	}
	
};

long long maxv(item a) {
	return max(a.seg, max(a.pre, max(a.suf, a.sum)));
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int n, m;
	cin >> n >> m;
	SegTree st;
	int size = st.init(n);
	while (m--) {
		int l, r;
		long long v;
		cin >> l >> r >> v;
		st.modify(l, r, v, 0, 0, size);
		item ans = st.query(0, n, 0, 0, size);
		cout << maxv(ans) << "\n";
	}
}


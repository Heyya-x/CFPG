/**
  *	 author:  Heyya
  *	 created: 03.09.2022 14:56
**/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct item {
	ll seg, pre, suf, sum;
};

struct SegTree {
	int size;
	vector<item> val;
	vector<ll> op;

	int init(int n) {
		size = 1;
		while (size < n) size *= 2;
		val.resize(2 * size);
		op.assign(2 * size, LLONG_MAX);
		return size;
	}
	
	item modify_op(ll v, ll len) {
		if (v < 0) {
			return {0, 0, 0, v * len};
		} else {
			return {v * len, v * len, v * len, v * len };
		}
	}

	item apply(item a, item b) {
		return {
			max(a.seg, max(a.suf + b.pre, b.seg)),
			max(a.pre, a.sum + b.pre),
			max(a.suf + b.sum, b.suf),
			a.sum + b.sum
		};
	}

	void propagate(int x, int lx, int rx) {
		if ((rx - lx == 1) || op[x] == LLONG_MAX) return;
		op[2 * x + 1] = op[2 * x + 2] = op[x];
		int mid = (lx + rx) / 2;
		val[2 * x + 1] = modify_op(op[x], mid - lx);
		val[2 * x + 2] = modify_op(op[x], rx - mid);
		val[x] = apply(val[2 * x + 1], val[2 * x + 2]);
		op[x] = LLONG_MAX;
	}

	void modify(int l, int r, ll v, int x, int lx, int rx) {
		propagate(x, lx, rx);
		if (r <= lx || rx <= l) return;
		if (l <= lx && rx <= r) {
			val[x] = modify_op(v, rx - lx);
			op[x] = v;
			return;
		}
		int mid = (lx + rx) / 2;
		modify(l, r, v, 2 * x + 1, lx, mid);
		modify(l, r, v, 2 * x + 2, mid, rx);	
		val[x] = apply(val[2 * x + 1], val[2 * x + 2]);
	}

	item query(int l, int r, int x, int lx, int rx) {
		propagate(x, lx, rx);
		if (r <= lx || rx <= l) return {0, 0, 0, 0};
		if (l <= lx && rx <= r) return val[x];
		int mid = (lx + rx) / 2;
		item s1 = query(l, r, 2 * x + 1, lx, mid);
		item s2 = query(l, r, 2 * x + 2, mid, rx);
		return apply(s1, s2);	
	}
};

ll maxv(item a) {
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
		ll v;
		cin >> l >> r >> v;
		st.modify(l, r, v, 0, 0, size);
		item ans = st.query(0, n, 0, 0, size);
		cout << maxv(ans) << "\n";
	}
}


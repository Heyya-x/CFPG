#include <bits/stdc++.h>
using namespace std;

struct SegTree {
	int size;
	vector<long long> values;
	vector<long long> OR;
	int init(int n) {
		size = 1;
		while (size < n) size *= 2;
		values.assign(2 * size, 0);
		OR.assign(2 * size, 0);
		return size;
	}

	long long modify_op(long long a, long long b) {
		return a | b;
	}

	long long apply_op(long long a, long long b) {
		return a & b;
	}

	void modify(int l, int r, int v, int x, int lx, int rx) {
		if (r <= lx || rx <= l) return;
		if (l <= lx && rx <= r) {
			values[x] = apply_op(values[x], v);
			OR[x] = apply_op(OR[x], v);
			return;
		}
		int mid = (lx + rx) / 2;
		modify(l, r, v, 2 * x + 1, lx, mid);
		modify(l, r, v, 2 * x + 2, mid, rx);
		values[x] = modify_op(values[2 * x + 1], values[2 * x + 2]);
		apply_op(values[x], OR[x]);
	}

	long long query(int l, int r, int x, int lx, int rx) {
		if (r <= lx || rx <= l) return 0xffffffffffffffff;
		if (l <= lx && rx <= r) {
			values[x] = modify_op(values[x], OR[x]);
			return values[x];
		}
		int mid = (lx + rx) / 2;
		OR[2 * x + 1] = OR[2 * x + 2] = OR[x];
		OR[x] = 0;
		auto s1 = query(l, r, 2 * x + 1, lx, mid);
		auto s2 = query(l, r, 2 * x + 2, mid, rx);
		return s1 & s2;
	}

};

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int n, m;
	cin >> n >> m;
	SegTree st;
	int size = st.init(n);

	while (m--) {
		int op, l, r;
		cin >> op >> l >> r;
		if (op == 1) {
			long long v;
			cin >> v;
			st.modify(l - 1, r, v, 0, 0, size);
		} else {
			cout << st.query(l - 1, r, 0 ,0 ,size) << "\n";
		}
	}
}

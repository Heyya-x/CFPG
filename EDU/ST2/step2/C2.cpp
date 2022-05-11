#include <bits/stdc++.h>
using namespace std;

struct segtree {
	int size;
	vector<long long> values;
	vector<long long> operation;

	long long calc_op(long long a, long long b) {
		return (a & b);
	}

	long long modify_op(long long a, long long b) {
		return (a | b);
	}

	void apply(long long &a, long long b) {
		a = modify_op(a, b);
	}

	void init(int n) {
		size = 1;
		while (size < n) size *= 2;
		values.assign(2 * size, 0LL);
		operation.assign(2 * size, 0LL);
	}

	void modify(int l, int r, int v, int x, int lx, int rx) {
		if (r <= lx || rx <= l) return;
		if (l <= lx && rx <= r) {
			apply(operation[x], v);
			apply(values[x], v);
			return;
		}
		int m = (lx + rx) / 2;
		modify(l, r, v, 2 * x + 1, lx, m);
		modify(l, r, v, 2 * x + 2, m, rx);
		values[x] = calc_op(values[2 * x + 1], values[2 * x + 2]);
		apply(values[x], operation[x]);
	}

	void modify(int l, int r, int v) {
		modify(l, r, v, 0, 0, size);
	}

	long long calc(int l, int r, int x, int lx, int rx) {
		if (r <= lx || rx <= l) return 0xffffffffffffffff;
		if (l <= lx && rx <= r) return values[x];
		int m = (lx + rx) / 2;
		long long s1 = calc(l, r, 2 * x + 1, lx, m);
		long long s2 = calc(l, r, 2 * x + 2, m, rx);
		long long res = calc_op(s1, s2);
		apply(res, operation[x]);
		return res;
	}

	long long calc(int l, int r) {
		return calc(l, r, 0, 0, size);
	}
};

int main() {
	int n, m;
	cin >> n >> m;

	segtree st;
	st.init(n);

	while (m--) {
		int op, l, r;
		cin >> op >> l >> r;
		if (op == 1) {
			long long v;
			cin >> v;
			st.modify(l, r, v);
		} else {
			cout << st.calc(l, r) << '\n';
		}
	}
}

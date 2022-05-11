#include <bits/stdc++.h>
using namespace std;

struct segtree {
	
	int size;
	int MOD = 1e9 + 7;
	vector<long long> values;
	vector<long long> mult;

	long long modify_op(long long a, long long b) {
		return (a * b) % MOD;
	}

	long long calc(long long a, long long b) {
		return (a + b) % MOD;
	}

	void apply_mod_op(long long &a, long long b) {
		a = modify_op(a, b);
	}

	void build(int x, int lx, int rx) {
		if (rx - lx == 1) {
			values[x] = 1;
			return;
		}
		int m = (lx + rx) / 2;
		build(2 * x + 1, lx, m);
		build(2 * x + 2, m, rx);
		values[x] = calc(values[2 * x + 1], values[2 * x + 2]);
	}

	void init(int n) {
		size = 1;
		while (size < n) size *= 2;
		values.assign(2 * size, 0LL);
		mult.assign(2 * size, 1LL);
		build(0, 0, size);
	}

	void modify(int l, int r, int v, int x, int lx, int rx) {
		if (r <= lx || rx <= l) return;
		if (l <= lx && rx <= r) {
			apply_mod_op(mult[x], v);
			apply_mod_op(values[x], v);
			return;
		}
		int m = (lx + rx) / 2;
		modify(l, r, v, 2 * x + 1, lx, m);
		modify(l, r, v, 2 * x + 2, m, rx);
		values[x] = calc(values[2 * x + 1], values[2 * x + 2]) * mult[x];
	}

	void modify(int l, int r, int v) {
		modify(l, r, v, 0, 0, size);
	}

	long long calc(int l, int r, int x, int lx, int rx) {
		if (r <= lx || rx <= l) return 0LL;
		if (l <= lx && rx <= r) return values[x];
		int m = (lx + rx) / 2;
		long long s1 = calc(l, r, 2 * x + 1, lx, m);
		long long s2 = calc(l, r, 2 * x + 2, m, rx);
		long long s = calc(s1, s2);
		apply_mod_op(s, mult[x]);
		return s;
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
		int op;
		cin >> op;
		if (op == 1) {
			int l, r, v;
			cin >> l >> r >> v;
			st.modify(l, r, v);
		} else {
			int l, r;
			cin >> l >> r;
			cout << st.calc(l, r) << '\n';
		}
	}
}

#include <bits/stdc++.h>
using namespace std;

struct segtree {
	
	int size;
	vector<long long> values;
	long long NO_OP = LLONG_MAX;

	void init(int n) {
		size = 1;
		while (size < n) size *= 2;
		values.assign(2 * size, 0LL);
	}

	void apply(long long &a, long long b) {
		if (b == NO_OP) return;
		else a = b;
	}

	void propagate(int x, int lx, int rx) {
		if (rx - lx == 1) return;
		apply(values[2 * x + 1], values[x]);
		apply(values[2 * x + 2], values[x]);
		values[x] = NO_OP;
	}

	void modify(int l, int r, int v, int x, int lx, int rx) {
		propagate(x, lx, rx);
		if (r <= lx || rx <= l) return;
		if (l <= lx && rx <= r) {
			apply(values[x], v);
			return;
		}
		int m = (lx + rx) / 2;
		modify(l, r, v, 2 * x + 1, lx, m);
		modify(l, r, v, 2 * x + 2, m, rx);
	}

	void modify(int l, int r, int v) {
		modify(l, r, v, 0, 0, size);
	}

	long long get(int i, int x, int lx, int rx) {
		propagate(x, lx, rx);
		if (rx - lx == 1) return values[x];
		int m = (lx + rx) / 2;
		long long res;
		if (i < m) {
			res = get(i, 2 * x + 1, lx, m);
		} else {
			res = get(i, 2 * x + 2, m, rx);
		}
		return res;

	}

	long long get(int i) {
		return get(i, 0, 0, size);
	}

};

int main() {
	ios::sync_with_stdio(false); cin.tie(0);
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
			int i;
			cin >> i;
			cout << st.get(i) << '\n';
		}
	}
}


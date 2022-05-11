#include <bits/stdc++.h>
using namespace std;

struct segtree {
	
	int size;
	vector<int> values;
	int NEUTRAL_ELEMENT;

	void init(int n) {
		size = 1;
		while (size < n) size *= 2;
		NEUTRAL_ELEMENT = 0;
		values.assign(2 * size, INT_MAX);
	}

	int merge(int a, int b) {
		return min(a, b);
	}

	void build(vector<int> &a, int x, int lx, int rx) {
		if (rx - lx == 1) {
			if (lx < (int)a.size()) values[x] = a[lx];
			return;
		}
		int m = (lx + rx) / 2;
		build(a, 2 * x + 1, lx, m);
		build(a, 2 * x + 2, m, rx);
		values[x] = merge(values[2 * x + 1], values[2 * x + 2]);
	}
	
	void build(vector<int> &a) {
		build(a, 0, 0, size);
	}

	void set(int i, int v, int x, int lx, int rx) {
		if (rx - lx == 1) {
			values[x] = v;
			return;
		}
		int m = (lx + rx) / 2;
		if (i < m) {
			set(i, v, 2 * x + 1, lx, m);
		} else {
			set(i, v, 2 * x + 2, m, rx);
		}
		values[x] = merge(values[2 * x + 1], values[2 * x + 2]);
	}

	void set(int i, int v) {
		set(i, v, 0, 0, size);
	}

	int calc(int l, int r, int p, int x, int lx, int rx) {
		if (r <= lx || rx <= l) return NEUTRAL_ELEMENT;
		if (rx - lx == 1) {
			if (values[x] <= p) {
				set(lx, INT_MAX);
				return 1;
			}
		}
		int m = (lx + rx) / 2;
		int s1 = 0, s2 = 0;
		if (values[x] <= p) {
			s1 = (values[2 * x + 1] <= p ? calc(l, r, p, 2 * x + 1, lx, m) : 0);
			s2 = (values[2 * x + 2] <= p ? calc(l, r, p, 2 * x + 2, m, rx) : 0);
		}
		return (s1 + s2);
	}

	int calc(int l, int r, int p) {
		return calc(l, r, p, 0, 0, size);
	}

};

int main() {
	ios::sync_with_stdio(false); cin.tie(0);
	int n, m;
	cin >> n >> m;

	vector<int> a(n, INT_MAX);
	segtree st;
	st.init(n);
	st.build(a);

	while (m--) {
		int op;
		cin >> op;
		if (op == 1) {
			int i, h;
			cin >> i >> h;
			st.set(i, h);
		} else {
			int l, r, p;
			cin >> l >> r >> p;
			cout << st.calc(l, r, p) << '\n';
		}
	}
}


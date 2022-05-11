#include <bits/stdc++.h>
using namespace std;

struct segtree {
	
	int size;
	vector<int> values;

	void init(int n) {
		size = 1;
		while (size < n) size *= 2;
		values.assign(2 * size, 0LL);
	}

	int merge(int a, int b) {
		return (a + b);
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

	int calc(int l, int r, int x, int lx, int rx) {
		if (r <= lx || rx <= l) return 0;
		if (l <= lx && rx <= r) return values[x];
		int m = (lx + rx) / 2;
		int s1 = calc(l, r, 2 * x + 1, lx, m);
		int s2 = calc(l, r, 2 * x + 2, m, rx);
		return merge(s1, s2);
	}

	int calc(int l, int r) {
		return calc(l, r, 0, 0, size);
	}

};

int main() {
	ios::sync_with_stdio(false); cin.tie(0);
	int n, q;
	cin >> n >> q;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	vector<int> ass(n, 0);
	segtree st[40];
	for (int i = 0; i < 40; i++) {
		st[i].init(n);
		st[i].build(ass);
	}

	for (int i = 0; i < n; i++) {
		st[a[i] - 1].set(i, 1);
	}

	while (q--) {
		int op;
		cin >> op;
		if (op == 1) {
			int l, r;
			cin >> l >> r;
			int ans = 0;
			for (int i = 0; i < 40; i++) {
				if (st[i].calc(l - 1, r) > 0) ans++;
			}
			cout << ans << '\n';
		} else {
			int x, y;
			cin >> x >> y;
			st[a[x - 1] - 1].set(x - 1, 0);
			a[x - 1] = y;
			st[a[x - 1] - 1].set(x - 1, 1);
		}
	}
}


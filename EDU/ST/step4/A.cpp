#include <bits/stdc++.h>
using namespace std;

struct segtree {
	
	int size;
	vector<long long> values;

	void init(int n) {
		size = 1;
		while (size < n) size *= 2;
		values.assign(2 * size, 0LL);
	}

	long long merge(long long a, long long b) {
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
		if (i & 1) {
			set(i, -v, 0, 0, size);
		} else {
			set(i, v, 0, 0, size);
		}
	}

	long long calc(int l, int r, int x, int lx, int rx) {
		if (r <= lx || rx <= l) return 0;
		if (l <= lx && rx <= r) return values[x];
		int m = (lx + rx) / 2;
		long long s1 = calc(l, r, 2 * x + 1, lx, m);
		long long s2 = calc(l, r, 2 * x + 2, m, rx);
		return merge(s1, s2);
	}

	long long calc(int l, int r) {
		if (l & 1) {
			return -1LL * calc(l, r, 0, 0, size);
		} else {
			return calc(l, r, 0, 0, size);
		}
	}

};

int main() {
	ios::sync_with_stdio(false); cin.tie(0);
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (i & 1) a[i] = -a[i];
	}

	segtree st;
	st.init(n);
	st.build(a);

	int m;
	cin >> m;
	while (m--) {
		int op;
		cin >> op;
		if (op == 0) {
			int i, j;
			cin >> i >> j;
			st.set(i - 1, j);
		} else {
			int l, r;
			cin >> l >> r;
			cout << st.calc(l - 1, r) << '\n';
		}
	}
}


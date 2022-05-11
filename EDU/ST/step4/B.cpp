#include <bits/stdc++.h>
using namespace std;

struct mat {
	long long a11, a12, a21, a22;
};

struct segtree {
	
	int size, r;
	vector<mat> values;
	mat NEUTRAL_ELEMENT = {1, 0, 0, 1};

	void init(int n, int v) {
		size = 1;
		r = v;
		while (size < n) size *= 2;
		values.resize(2 * size);
		for (int i = 0; i < 2 * size; i++) {
			values[i] = NEUTRAL_ELEMENT;
		}
	}

	mat merge(mat a, mat b) {
		return {(a.a11 * b.a11 + a.a12 * b.a21) % r,
				(a.a11 * b.a12 + a.a12 * b.a22) % r,
				(a.a21 * b.a11 + a.a22 * b.a21) % r,
				(a.a21 * b.a12 + a.a22 * b.a22) % r
				};
	}

	void build(vector<mat> &a, int x, int lx, int rx) {
		if (rx - lx == 1) {
			if (lx < (int)a.size()) values[x] = a[lx];
			return;
		}
		int m = (lx + rx) / 2;
		build(a, 2 * x + 1, lx, m);
		build(a, 2 * x + 2, m, rx);
		values[x] = merge(values[2 * x + 1], values[2 * x + 2]);
	}
	
	void build(vector<mat> &a) {
		build(a, 0, 0, size);
	}

	mat calc(int l, int r, int x, int lx, int rx) {
		if (r <= lx || rx <= l) return NEUTRAL_ELEMENT;
		if (l <= lx && rx <= r) return values[x];
		int m = (lx + rx) / 2;
		mat s1 = calc(l, r, 2 * x + 1, lx, m);
		mat s2 = calc(l, r, 2 * x + 2, m, rx);
		return merge(s1, s2);
	}

	mat calc(int l, int r) {
		return calc(l, r, 0, 0, size);
	}

};

int main() {
	ios::sync_with_stdio(false); cin.tie(0);
	int r, n, m;
	cin >> r >> n >> m;
	vector<mat> a(n);
	for (int i = 0; i < n; i++) {
		mat c;
		cin >> c.a11 >> c.a12 >> c.a21 >> c.a22;
		a[i] = c;
	}

	segtree st;
	st.init(n, r);
	st.build(a);

	while (m--) {
		int l, r;
		cin >> l >> r;
		mat c = st.calc(l - 1, r);
		cout << c.a11 << " " << c.a12 << "\n" << c.a21 << " " << c.a22 << "\n\n";
	}
}


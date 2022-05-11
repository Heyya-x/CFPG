#include <bits/stdc++.h>
using namespace std;

struct segtree {
	
	int size;
	vector<long long> values;
	vector<long long> mins;
	
	void init(int n) {
		size = 1;
		while (size < n) size *= 2;
		values.assign(2 * size, 0LL);
		mins.assign(2 * size, 0LL);
	}
	
	void add(int l, int r, int v, int x, int lx, int rx) {
		if (r <= lx || rx <= l) return;
		if (l <= lx && rx <= r) {
			values[x] += v;
			mins[x] += v;
			return;
		}
		int m = (lx + rx) / 2;
		add(l, r, v, 2 * x + 1, lx, m);
		add(l, r, v, 2 * x + 2, m, rx);
		mins[x] = min(mins[2 * x + 1], mins[2 * x + 2]) + values[x];
		return;
	}

	void add(int l, int r, int v) {
		add(l, r, v, 0, 0, size);
	}

	long long get(int l, int r, int x, int lx, int rx) {
		if (r <= lx || rx <= l) return LLONG_MAX;
		if (l <= lx && rx <= r) return mins[x];
		int m = (lx + rx) / 2;
		long long s1 = get(l, r, 2 * x + 1, lx, m);
		long long s2 = get(l, r, 2 * x + 2, m, rx);
		return min(s1, s2) + values[x];
	}

	long long get(int l, int r) {
		return get(l, r, 0, 0, size);
	}

};

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
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
			st.add(l, r, v);
		} else {
			int l, r;
			cin >> l >> r;
			cout << st.get(l, r) << '\n';
		}
	}
	return 0;
}

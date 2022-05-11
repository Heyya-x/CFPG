#include <bits/stdc++.h>
using namespace std;

struct segtree {
	
	int size;
	vector<long long> values;
	int NEUTRAL_ELEMENT;

	void init(int n) {
		size = 1;
		while (size < n) size *= 2;
		NEUTRAL_ELEMENT = 0;
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
		
	void setMax(int l, int r, long long v, int x, int lx, int rx) {
		if (r <= lx || rx <= l) return;
		if (l <= lx && rx <= r) {
			values[x] = max(values[x], v);
			return;
		}
		int m = (lx + rx) / 2;
		setMax(l, r, v, 2 * x + 1, lx, m);
		setMax(l, r, v, 2 * x + 2, m, rx);
	}

	void setMax(int l, int r, long long v) {
		setMax(l, r, v, 0, 0, size);
	}

	long long get(int i, int x, int lx, int rx) {
		if (rx - lx == 1) return values[x];
		int m = (lx + rx) / 2;
		long long res;
		if (i < m) {
			res = get(i, 2 * x + 1, lx, m);
		} else {
			res = get(i, 2 * x + 2, m, rx);
		}
		return max(values[x], res);

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
			st.setMax(l, r, v);
		} else {
			int i;
			cin >> i;
			cout << st.get(i) << '\n';
		}
	}
}


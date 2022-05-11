#include <bits/stdc++.h>
using namespace std;

struct segtree {
	int size;
	int NEUTRAL_ELEMENT = 0;
	vector<int> values;

	void init(int n) {
		size = 1;
		while (size < n) size *= 2;
		values.assign(2 * n, 0);
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

	int sum(int l, int r, int x, int lx, int rx) {
		if (l >= rx || lx >= r) return 0;
		if (l <= lx && rx <= r) return values[x];
		int m = (lx + rx) / 2;
		int s1 = sum(l, r, 2 * x + 1, lx, m);
		int s2 = sum(l, r, 2 * x + 2, m, rx);
		return s1 + s2;
	}

	int sum(int l, int r) {
		return sum(l, r, 0 ,0, size);
	}
	
};

int main() {
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	segtree st;
	st.init(2 * n);
	vector<int> index(n), ans(n);
	vector<bool> vis(n, false);
	for (int i = 0; i < 2 * n; i++) {
		int temp;
		cin >> temp;
		temp--;
		if (vis[temp]) {
			st.set(index[temp], 1);
			ans[temp] = st.sum(index[temp] + 1, i);
		} else {
			vis[temp] = true;
			index[temp] = i;
		}
	}
	for (int i = 0; i < n; i++) {
		cout << ans[i] << ' ';
	}
	return 0;
}

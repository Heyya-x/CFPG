#include <bits/stdc++.h>
using namespace std;

struct item {
	int m, c;
};

struct segment {
	int size;
	vector<item> mins;	

	item merge(item a, item b) {
		if (a.m < b.m) return a;
		if (a.m > b.m) return b;
		return {a.m, a.c + b.c};
	}

	void init(int n) {
		size = 1;	
		while (size < n) size *= 2;
		mins.resize(2 * size);
	}

	void set(int i, int v, int x, int lx, int rx) {
		if (lx + 1 == rx) {
			mins[x] = {v, 1};
			return;
		}
		int m = (lx + rx) / 2;
		if (i < m) {
			set(i, v, 2 * x + 1, lx, m);
		} else {
			set(i, v, 2 * x + 2, m, rx);
		}
		mins[x] = merge(mins[2 * x + 1], mins[2 * x + 2]);
	}

	void set(int i, int v) {
		set(i, v, 0, 0, size); 
	}
	
	item getMin(int l, int r, int x, int lx, int rx) {
		if (rx <= l || lx >= r) return {INT_MAX, 0};
		if (l <= lx && rx <= r) return mins[x];
		int m = (lx + rx) / 2;
		item s1 = getMin(l, r, 2 * x + 1, lx, m);
		item s2 = getMin(l, r, 2 * x + 2, m, rx);
		return merge(s1, s2);
	}
	
	item getMin(int l, int r) {
		return getMin(l, r, 0, 0, size);
	}

	void build(vector<int> &a, int x, int lx, int rx) {
		if (lx + 1 == rx) {
			if (lx <= (int)a.size()) {
				mins[x] = {a[lx], 1};
			}
			return;
		}
		int m = (lx + rx) / 2;
		build(a, 2 * x + 1, lx, m);
		build(a, 2 * x + 2, m, rx);
		mins[x] = merge(mins[2 * x + 1], mins[2 * x + 2]);
	}

	void build(vector<int> &a) {
		build(a, 0, 0, size);
	}

};

int main() {
	ios::sync_with_stdio(false);
	int n, m;
	cin >> n >> m;
	segment st;
	st.init(n);
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	st.build(a);
	while (m--) {
		int op;
		cin >> op;
		if (op == 1) {
			int i, v;
			cin >> i >> v;
			st.set(i, v);
		} else {
			int l, r;
			cin >> l >> r;
			item ans = st.getMin(l, r);
			cout << ans.m << ' ' << ans.c << '\n';
		}
	}
	return 0;
}


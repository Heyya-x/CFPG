#include <bits/stdc++.h>
using namespace std;

struct item {
	int cnt;
	int nums[45];
};

struct segtree {
	
	int size;
	vector<item> values;
	item NEUTRAL_ELEMENT;
	void init(int n) {
		size = 1;
		while (size < n) size *= 2;
		for (int i = 0; i < 45; i++) NEUTRAL_ELEMENT.nums[i] = 0;
		NEUTRAL_ELEMENT.cnt = 0;
		values.assign(40, NEUTRAL_ELEMENT); 
	}

	item merge(item a, item b) {
		item c;
		c.cnt = 0;
		for (int i = 0; i < 40; i++) {
			c.nums[i] = a.nums[i] + b.nums[i];
			if (c.nums[i] > 0) c.cnt++;
		}
		return c;
	}

	void build(vector<int> &a, int x, int lx, int rx) {
		if (rx - lx == 1) {
			if (lx < (int)a.size()) {
				values[x].nums[a[lx]] = 1;
				values[x].cnt = 1;
			}
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

	void set(int i, int v, int pre, int x, int lx, int rx) {
		if (rx - lx == 1) {
			values[x].nums[v]++;
			values[x].nums[pre]--;
			return;
		}
		int m = (lx + rx) / 2;
		if (i < m) {
			set(i, v, pre, 2 * x + 1, lx, m);
		} else {
			set(i, v, pre, 2 * x + 2, m, rx);
		}
		values[x] = merge(values[2 * x + 1], values[2 * x + 2]);
	}

	void set(int i, int v, int pre) {
		set(i, v, pre, 0, 0, size);
	}

	item  calc(int l, int r, int x, int lx, int rx) {
		if (r <= lx || rx <= l) return NEUTRAL_ELEMENT;
		if (l <= lx && rx <= r) return values[x];
		int m = (lx + rx) / 2;
		item s1 = calc(l, r, 2 * x + 1, lx, m);
		item s2 = calc(l, r, 2 * x + 2, m, rx);
		return merge(s1, s2);
	}

	item calc(int l, int r) {
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
		a[i]--;
	}

	segtree st;
	st.init(n);
	st.build(a);

	while (q--) {
		int op;
		cin >> op;
		if (op == 1) {
			int l, r;
			cin >> l >> r;
			item ans = st.calc(l - 1, r);
			cout << ans.cnt << '\n';
		} else {
			int i, v;
			cin >> i >> v;
			st.set(i - 1, v - 1, a[i - 1]);
			a[i - 1] = v - 1;
		}
	}
}


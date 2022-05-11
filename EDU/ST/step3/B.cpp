#include <bits/stdc++.h>
using namespace std;

struct segment {
	
	int size;
	vector<int> values;
	int NEUTRAL_ELEMENT = 0;

	void init(int n) {
		size = 1;
		while (size < n) size *= 2;
		values.resize(2 * size);
	}
	
	int merge(int a, int b) {
		return a + b;
	}

	int single(int v) {
		return v;
	}

	void build(vector<int> &a, int x, int lx, int rx) {
		if (lx + 1 == rx) {
			if (lx < (int)a.size()) {
				values[x] = single(a[lx]);
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

	void set(int i, int v, int x, int lx, int rx) {
		if (lx + 1 == rx) {
			values[x] = single(v);
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

	long long calc(int l, int r, int x, int lx, int rx) {
		if (l >= rx || r <= lx) return NEUTRAL_ELEMENT;
		if (lx <= l && r <= rx) return values[x];
		int m = (lx + rx) / 2;
		int s1 = calc(l, r, 2 * x + 1, lx, m);
		int s2 = calc(l, r, 2 * x + 2, m, rx);
		return merge(s1, s2);
	}
	
	long long calc(int l, int r) {
		return calc(l, r, 0, 0, size);
	}

	int find(int k, int x, int lx, int rx) {
		if (lx + 1 == rx) {
			return lx;
		}
		int m = (lx + rx) / 2;
		int sr = values[2 * x + 2]; // firs find right side
		if (k < sr) {
			return find(k, 2 * x + 2, m, rx);
		} else {
			return find(k - sr, 2 * x + 1, lx, m);
		}
	}

	int find(int k) {
		return find(k, 0, 0, size);
	}

};

int main() {
	ios::sync_with_stdio(false); cin.tie(0);
	int n;
	cin >> n;
	segment st;
	st.init(n);
	vector<int> a(n);
	a.assign(n, 1);
	st.build(a);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	vector<int> ans(n);
	for (int i = n - 1; i >= 0; i--) {
		ans[i] = st.find(a[i]);
		st.set(ans[i], 0);
	}
	for (int i = 0; i < n; i++) {
		cout << ans[i] + 1 << ' ';
	}
	return 0;

}

#include <bits/stdc++.h>
using namespace std;

struct segment {
	
	int size;
	vector<int> values;
	int NEUTRAL_ELEMENT = INT_MIN;

	void init(int n) {
		size = 1;
		while (size < n) size *= 2;
		values.resize(2 * size);
	}
	
	int merge(int a, int b) {
		return max(a, b);
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
		int s1 = values[2 * x + 1];
		if (k < s1) {
			return find(k, 2 * x + 1, lx, m);
		} else {
			return find(k - s1, 2 * x + 2, m, rx);
		}
	}

	int find(int k) {
		return find(k, 0, 0, size);
	}
	
	int first_above(int v, int x, int lx, int rx){
		if (values[x] < v) return -1;
		if (lx + 1 == rx) return lx;
		int m = (lx + rx) / 2;
		int res = first_above(v, 2 * x + 1, lx, m);
		if (res == -1) {
			res = first_above(v, 2 * x + 2, m, rx);
		}
		return res;
	}

	int first_above(int v) {
		return first_above(v, 0, 0, size);
	}

};

int main() {
	ios::sync_with_stdio(false); cin.tie(0);
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
			int k;
			cin >> k;
			cout << st.first_above(k) << '\n';
		}
	}
	return 0;

}

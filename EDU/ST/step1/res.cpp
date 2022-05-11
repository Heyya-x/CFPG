#include <bits/stdc++.h>
using namespace std;

struct segment {
	int size;
	vector<long long> sums;	

	void init(int n) {
		size = 1;	
		while (size < n) size *= 2;
		sums.assign(2 * size, 0LL);
	}

	void set(int i, int v, int x, int lx, int rx) {
		if (lx + 1 == rx) {
			sums[x] = v;
			return;
		}
		int m = (lx + rx) / 2;
		if (i < m) {
			set(i, v, 2 * x + 1, lx, m);
		} else {
			set(i, v, 2 * x + 2, m, rx);
		}
		sums[x] = sums[2 * x + 1] + sums[2 * x + 2];
	}

	void set(int i, int v) {
		set(i, v, 0, 0, size); 
	}
	
	long long sum(int l, int r, int x, int lx, int rx) {
		if (l >= rx || r <= lx) return 0;
		if (l <= lx && rx <= r) return sums[x];
		int m = (lx + rx) / 2;
		long long s1 = sum(l, r, 2 * x + 1, lx, m);
		long long s2 = sum(l, r, 2 * x + 2, m, rx);
		return s1 + s2;	
	}
	
	long long sum(int l, int r) {
		return sum(l, r, 0, 0, size);
	}

	void build(vector<int> &a, int x, int lx, int rx) {
		if (lx + 1 == rx) {
			if (lx <= (int)a.size()) {
				sums[x] = a[lx];
			}
			return;
		}
		int m = (lx + rx) / 2;
		build(a, 2 * x + 1, lx, m);
		build(a, 2 * x + 2, m, rx);
		sums[x] = sums[2 * x + 1] + sums[2 * x + 2];
	}

	void build(vector<int> &a) {
		build(a, 0, 0, size);
	}

};
void solve() {
	int n; cin >> n;

	segment st;
	st.init(n);
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	st.build(a);
	string s;
	while (cin >> s) {
		if (s == "End") return;
		if (s != "Query") {
			int i, v;
			cin >> i >> v;
			if (s == "Sub") v = -v;
			st.set(i - 1, v);
		} else {
			int l, r;
			cin >> l >> r;
			cout << st.sum(l - 1, r) << '\n';
		}
	}
}
int main() {
	ios::sync_with_stdio(false);
	int T; cin >> T;
	while (T--) {
		solve();
	}
	return 0;
}

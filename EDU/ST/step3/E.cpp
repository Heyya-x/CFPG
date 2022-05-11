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

	void set(int i, long long v, int x, int lx, int rx) {
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

	void set(int i, long long v) {
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

int main() {
	ios::sync_with_stdio(false);
	int n, m;
	cin >> n >> m;
	n++;
	segment st;
	st.init(n + 1);
	vector<long long> a(n, 0);
	while (m--) {
		int op;
		cin >> op;
		if (op == 1) {
			int l, r, v;
			cin >> l >> r >> v;
			a[l] += v;
			a[r] -= v;
			st.set(l, a[l]);
			st.set(r, a[r]);
		} else {
			int i;
			cin >> i;
			cout << st.sum(0, i + 1) << '\n';
		}
	}
	return 0;
}

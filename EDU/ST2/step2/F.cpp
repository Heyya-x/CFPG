#include <bits/stdc++.h>
using namespace std;

struct SegTree {
	int size;
	vector<long long> values, operation;
	
	int init(int n) {
		size = 1;
		while (size < n) size *= 2;
		values.assign(2 * size, 0);
		operation.assign(2 * size, 0);
		return size;
	}
	
	void lazy_modify(int x, int lx, int rx) {
		if ((rx - lx == 1) || operation[x] == -1) return;
		int mid = (lx + rx) / 2;
		values[2 * x + 1] = values[2 * x + 2] = operation[x] * (rx - mid);
		operation[2 * x + 1] = operation[2 * x + 2] = operation[x];
		operation[x] = -1;
	}
	
	void modify(int l, int r, long long v, int x, int lx, int rx) {
		lazy_modify(x, lx, rx);
		if (r <= lx || rx <= l) return;
		if (l <= lx && rx <= r) {
			values[x] = v * (rx - lx);
			operation[x] = v;
			return;
		}
		int mid = (lx + rx) / 2;
		modify(l, r, v, 2 * x + 1, lx, mid);
		modify(l, r, v, 2 * x + 2, mid, rx);
		values[x] = values[2 * x + 1] + values[2 * x + 2];
	}
	
	long long query(int l, int r, int x, int lx, int rx) {
		lazy_modify(x, lx, rx);
		if (r <= lx || rx <= l) return 0;
		if (l <= lx && rx <= r) {
			return values[x];
		}
		int mid = (lx + rx) / 2;
		long long s1 = query(l, r, 2 * x + 1, lx, mid);
		long long s2 = query(l, r, 2 * x + 2, mid, rx);
		return (s1 + s2);
	}
	
};

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int n, m;
	cin >> n >> m;
	SegTree st;
	int size = st.init(n);
	while (m--) {
		int op, l, r;
		cin >> op >> l >> r;
		if (op == 1) {
			long long v;
			cin >> v;
			st.modify(l, r, v, 0, 0, size);
		} else {
			cout << st.query(l, r, 0, 0, size) << "\n";
		}
	}
}


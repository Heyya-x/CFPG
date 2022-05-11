/**
  *	 author:  Heyya
  *	 created: 03.09.2022 16:01
**/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct SegTree {
	int size;
	vector<bool> isInv;
	vector<int> val;

	int init(int n) {
		size = 1;
		while (size < n) size *= 2;
		isInv.assign(2 * size, false);
		val.assign(2 * size, 0);
		return size;
	}

	int set(int a, int len) {
		return len - a;
	}

	int apply(int a, int b) {
		return a + b;
	}

	void lazy(int x, int lx, int rx) {
		if (rx - lx == 1 || isInv[x] == false) return;
		int mid = (lx + rx) / 2;
		val[2 * x + 1] = set(val[2 * x + 1], mid - lx);
		val[2 * x + 2] = set(val[2 * x + 2], rx - mid);
		val[x] = apply(val[2 * x + 1], val[2 * x + 2]);
		isInv[2 * x + 1] = isInv[2 * x + 1] ^ isInv[x]; 
		isInv[2 * x + 2] = isInv[2 * x + 2] ^ isInv[x];
		isInv[x] = false;
	}

	void modify(int l, int r, int x, int lx, int rx) {
		lazy(x, lx, rx);
		if (r <= lx || rx <= l) return;
		if (l <= lx && rx <= r) {
			val[x] = set(val[x], rx - lx);
			isInv[x] = !isInv[x];
			return;
		}
		int mid = (lx + rx) / 2;
		modify(l, r, 2 * x + 1, lx, mid);
		modify(l, r, 2 * x + 2, mid, rx);
		val[x] = apply(val[2 * x + 1], val[2 * x + 2]);
	}

	int query(int k, int x, int lx, int rx) {
		lazy(x, lx, rx);
		if (rx - lx == 1) {
			return lx;
		}
		int mid = (lx + rx) / 2;
		if (val[2 * x + 1] > k) {
			return query(k, 2 * x + 1, lx, mid);
		} else {
			return query(k - val[2 * x + 1], 2 * x + 2, mid, rx);
		}
	}

};

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int n, m;
	cin >> n >> m;
	SegTree st;
	int size = st.init(n);

	while (m--) {
		int op;
		cin >> op;
		if (op == 1) {
			int l, r;
			cin >> l >> r;
			st.modify(l, r, 0, 0, size);
		} else {
			int k;
			cin >> k;
			cout << st.query(k, 0, 0, size) << "\n";
		}
	}
}

#include <bits/stdc++.h>
using namespace std;

struct SegTree {
	int size;
	vector<long long> values;
	vector<long long> operation;

	int init(int n) {
		size = 1;
		while (size < n) size *= 2;
		values.assign(2 * size, 0LL);
		operation.assign(2 * size, 0LL);
		return size;
	}

	long long query_op(long long a, long long b) {
		return a + b;
	}

	long long modify_op(long long a, long long b, long long len) {
		return a + b * len;
	}

	void apply_op(long long &a, long long b, long long len) {
		a = modify_op(a, b, len);
	}

	void modify(int l, int r, long long v, int x, int lx, int rx) {
		if (r <= lx || rx <= l) return;
		if (l <= lx && rx <= r) {
			apply_op(values[x], v, rx - lx);
			apply_op(operation[x], v, 1);
			return;
		}
		int mid = (lx + rx) / 2;
		modify(l, r, v, 2 * x + 1, lx, mid);
		modify(l, r, v, 2 * x + 2, mid, rx);
		values[x] = query_op(values[2 * x + 1], values[2 * x + 2]);
		apply_op(values[x], operation[x], rx - lx);
	}

	
	long long query(int l, int r, int x, int lx, int rx) {
		if (r <= lx || rx <= l) return 0LL;
		if (l <= lx && rx <= r) {
			return values[x];
		}
		int mid = (lx + rx) / 2;
		long long s1 = query(l, r, 2 * x + 1, lx, mid);
		long long s2 = query(l, r, 2 * x + 2, mid, rx);
		long long res = query_op(s1, s2);
		apply_op(res, operation[x], min(r, rx) - max(l, lx));
		return res;
	}

};

int main() {
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

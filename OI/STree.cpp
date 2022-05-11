#include <bits/stdc++.h>
using namespace std;
const int N = 1e6+5;
long long tr[N], b[N];
int n, q;

void add(int x, int k) {
	long long res = x;
	for (; x <= n; x += x & -x) {
		tr[x] += k;
		b[x] += res * k;
	}
}

long long getSum(int x) {
	long long ans = 0, res = x;
	for (; x; x -= x & -x)
		ans += (res + 1) * tr[x] - b[x];
	return ans;
}

int main() {
	cin >> n >> q;
	int x, pre = 0;
	for (int i = 1; i <= n; i++) {
		cin >> x;
		add(i, x - pre);
		pre = x;
	}
	int op, l, r;
	while (q--) {
		cin >> op;
		if (op == 1) {
			cin >> l >> r >> x;
			add(l, x);
			add(r + 1, -x);
		} else {
			cin >> l >> r;
			cout << getSum(r) - getSum(l - 1) << '\n';
		}
	}
	return 0;
}

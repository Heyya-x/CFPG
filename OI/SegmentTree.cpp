#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e6 + 1;

ll tr[N];
ll n, q;

int lowbit(int x) {
	return x & -x;
}

void update(int x, int v) {
	while (x <= n) {
		tr[x] += v;
		x += lowbit(x);
	}
}

ll ask(int x) {
	ll ans = 0;
	while (x) {
		ans += tr[x];
		x -= lowbit(x);
	}
	return ans;
}

int main() {
	cin >> n >> q;
	int a, b = 0;
	for (int i = 1; i <= n; i++) {
		cin >> a;
		update(i, a - b);
		b = a;
	}
	int t, i, l, r;
	while (q--) {
		cin >> t;
		if (t == 1) {
			cin >> l >> r >> i;
			update(l, i);
			update(r + 1, -i);
		} else {
			cin >> i;
			cout << ask(i) << '\n';
		}
	}
	return 0;
}

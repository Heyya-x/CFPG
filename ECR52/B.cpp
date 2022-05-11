/**
  *	 author:  Heyya
  *	 created: 03.12.2022 23:18
**/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	ll n, m;
	cin >> n >> m;
	ll k = 0;
	while (k * (k - 1) / 2 < m) k++;
	ll minn = max(0LL, n - 2 * m);
	ll maxn = n - k;
	cout << minn << " " << maxn << "\n";
	return;
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int T = 1; //cin >> T;
	while (T--) {	
		solve();
	}
	return 0;
}


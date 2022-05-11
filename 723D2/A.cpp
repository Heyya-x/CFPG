/**
  *	 author:  Heyya
  *	 created: 11.18.2021 21:32
**/
#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> a(2 * n + 1);
	for (int i = 1; i <= 2 * n; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	for (int i = 1; i <= n; i++) {
		cout << a[i] << ' ' << a[2 * n - i + 1] << ' ';
	}
	cout << '\n';
	return;
}

signed main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int T = 1; cin >> T;
	while (T--) {	
		solve();
	}
	return 0;
}



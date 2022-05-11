/**
  *	 author:  Heyya
  *	 created: 11.18.2021 22:00
**/
#include <bits/stdc++.h>
//#define int long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a + n);
	int i = 1;
	for (; i < n; i++)
		if (a[i] != a[i - 1]) break;
	cout << n - i << '\n';
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



/**
  *	 author:  Heyya
  *	 created: 11.19.2021 23:09
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n, H;
	cin >> n >> H;
	int s[n];
	for (int i = 0; i < n; i++)
		cin >> s[i];
	sort(s, s + n);
	int a, b;
	a = s[n - 1];
	b = (n > 1 ? s[n - 2] : s[n - 1]);
	int ans = H / (a + b) * 2;
	H %= (a + b);
	if (H > a) ans += 2;
	else if (H) ans += 1;
	cout << ans << '\n';
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



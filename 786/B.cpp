/**
  *	 author:  Heyya
  *	 created: 05.03.2022 18:20
**/
#include <bits/stdc++.h>
using namespace std;
using LL = long long;

void solve() {
	string s; cin >> s;
	int ans = (s[0] - 'a') * 25 + (s[1] - 'a' + 1 - (s[1] > s[0]));
	cout << ans << "\n";
	return;
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int T = 1; cin >> T;
	while (T--) {	
		solve();
	}
	return 0;
}


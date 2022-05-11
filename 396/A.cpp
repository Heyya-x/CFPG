/**
  *	 author:  Heyya
  *	 created: 03.12.2022 19:35
**/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	string s1, s2;
	cin >> s1 >> s2;
	if (s1 == s2) cout << "-1\n";
	else cout << max(s1.length(), s2.length()) << "\n";
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


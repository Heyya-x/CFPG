/**
  *	 author:  Heyya
  *	 created: 02.06.2022 22:34
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	string s; int n, k;
	cin >> n >> k >> s;
	string s2 = s;
	reverse(s2.begin(), s2.end());
	if (s == s2) {
		cout << 1 << "\n";
	} else {
		if (k == 0) cout << 1 << "\n";
		else cout << 2 << "\n";
	}
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



/**
  *	 author:  Heyya
  *	 created: 02.06.2022 13:41
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	string s; cin >> s;
	int n = s.length();
	if (n & 1) {
		cout << "No\n";
		return;
	}
	for (int i = 0; i < n / 2; i++) {
		if (s[i] != s[i + n / 2]) {
			cout << "No\n";
			return;
		}
	}
	cout << "Yes\n";
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



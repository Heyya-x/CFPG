/**
  *	 author:  Heyya
  *	 created: 05.10.2022 16:38
**/
#include <bits/stdc++.h>
using namespace std;
using LL = long long;

void solve() {
	string s; cin >> s;
	if (s.size() == 1 || s.back() != 'B') {
		cout << "No\n";
		return;
	}
	int a = 0, b = 0;
	for (int i = 0; i < (int)s.size(); i++) {
		if (s[i] == 'A') a++;
		else b++;
		if (b > a) {
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


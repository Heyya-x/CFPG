/**
  *	 author:  Heyya
  *	 created: 03.09.2022 12:19
**/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	string s;
	char ch;
	cin >> s >> ch;
	bool ans = false;
	for (int i = 0; i < (int)s.length(); i++) {
		if (i % 2 == 0 && s[i] == ch) {
			ans = true;
			break;
		}
	}
	if (ans) {
		cout << "Yes\n";
	} else {
		cout << "No\n";
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


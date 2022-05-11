/**
  *	 author:  Heyya
  *	 created: 04.15.2022 19:44
**/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	string s, t;
	cin >> s >> t;
	vector<int> a(26);
	for (int i = 0; i < (int)s.length(); i++) {
		a[s[i] - 'a']++;
	}
	if (t[0] == 'a' && a[0] > 0 && t[1] == 'b' && a[1] > 0) {
		while (a[0] > 0) {
			cout << 'a';
			a[0]--;
		}
		while (a[2] > 0) {
			cout << 'c';
			a[2]--;
		}
		while (a[1] > 0) {
			cout << 'b';
			a[1]--;
		}
	} else {
		for (int i = 0; i < 3; i++) {
			while (a[i] > 0) {
				cout << (char)('a' + i);
				a[i]--;
			}
		}
	}
	for (int i = 3; i < 26; i++) {
		while (a[i] > 0) {
			cout << (char)('a' + i);
			a[i]--;
		}
	}
	cout << "\n";
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


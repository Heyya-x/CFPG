/**
  *	 author:  Heyya
  *	 created: 11.12.2021 23:46
**/
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	for (int i = 0; i < n - 1; i++) {
		if (s[i] == 'a' && s[i + 1] == 'a') {
			cout << "2\n";
			return;
		}
	}
	if (n >= 3) {
		for (int i = 0; i < n - 2; i++) {
			if (s[i] == 'a' && s[i + 2] == 'a') {
				cout << "3\n";
				return;
			}
		}
	}
	if (n >= 4) {
		for (int i = 0; i < n - 3; i++) {
			if (s[i] == 'a' && s[i + 3] == 'a' && s[i + 1] != s[i + 2]) {
				cout << "4\n";
				return;
			}
		}
	}
	if (n >= 7) {
		for (int i = 0; i < n - 6; i++) {
			int b = 0, c = 0;
			if (s[i] == 'a' && s[i + 3] == 'a' && s[i + 6] == 'a') {
				(s[i + 1] == 'b' ? b++ : c++);
				(s[i + 2] == 'b' ? b++ : c++);
				(s[i + 4] == 'b' ? b++ : c++);
				(s[i + 5] == 'b' ? b++ : c++);
				if (b == 2 && c == 2) {
					cout << "7\n";
					return;
				}
			}
		}
	}
	cout << "-1\n";
	return;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {	
		solve();
	}
	return 0;
}



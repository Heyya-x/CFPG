/**
  *	 author:  Heyya
  *	 created: 03.30.2022 18:44
**/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	int n;
	string s;
	cin >> n >> s;
	for (int i = 0; i < n; i++) {
		if (s[i] == '0') {
			if (i >= n / 2) {
				cout << 1 << " " << i + 1 << " " << 1 << i + 2 << "\n";
			} else {
				cout << i + 1 << " " << n << " " << i + 2 << n << "\n";
			}
			return;
		}
	}
	cout << 1 << " " << n - 1 << " " << 2 << " " << n << "\n";
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


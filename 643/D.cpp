/**
  *	 author:  Heyya
  *	 created: 05.03.2022 09:08
**/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	// 8 4 = 2 + 2 + 2 + 2
	// 8 5 = 1 + 1 + 2 + 2 + 2
	// 1 * k + k + 2
	// 2 * k + 2
	// 7 3 = 2 + 2 + 3
	// 7 4 = 1 + 1 + 2 + 3
	// 4 2 = 2 + 2
	// 4 2 = 1 + 3
	int n, s;
	cin >> n >> s;
	if (n > s / 2) {
		cout << "NO\n";
	} else {
		cout << "YES\n";
		for (int i = 1; i < n; i++) {
			cout << "1 ";
		}
		cout << s - n + 1 << "\n" << s - n << "\n";
	}
	return;
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int T = 1; // cin >> T;
	while (T--) {	
		solve();
	}
	return 0;
}


/**
  *	 author:  Heyya
  *	 created: 03.15.2022 12:24
**/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	int n, m;
	cin >> n >> m;
	if (n > m + 1 || m > 2 * (n + 1)) {
		cout << "-1\n";
	} else {
		if (n > m) {
			cout << "0";
			n--;
		}
		int res = m - n;
		for (int i = 0; i < n; i++) {
			cout << "1";
			if (res > 0) {
				cout << "1";
				res--;
			}
			cout << "0";
		}
		while (res--) {
			cout << "1";
		}
		cout << "\n";
	}
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


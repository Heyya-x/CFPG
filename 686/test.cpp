/**
  *	 author:  Heyya
  *	 created: 05.02.2022 23:24
**/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	int n; cin >> n;
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			cout << "NO\n";
			return;
		}
	}
	cout << "YES\n";
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


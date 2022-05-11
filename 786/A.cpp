/**
  *	 author:  Heyya
  *	 created: 05.03.2022 18:14
**/
#include <bits/stdc++.h>
using namespace std;
using LL = long long;

void solve() {
	int x, y;
	cin >> x >> y;
	if (y % x != 0) {
		cout << "0 0\n";
	} else {
		int k = y / x;
		cout << 1 << " " << k << "\n";
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


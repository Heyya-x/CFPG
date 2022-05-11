/**
  *	 author:  Heyya
  *	 created: 11.26.2021 20:09
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n, a, b; cin >> n >> a >> b;
	if ((a < n / 2 + 1 && b > n / 2) || (a == n / 2 && b == n / 2 + 1) || ( a == n / 2 + 1 && b == n / 2)){
		bool f = true;
		if ((a == n / 2 + 1) && (b == n / 2)) f = false;
		for (int i = n; i > 0; i--) {
			if (i != n) cout << ' ';
			if (i == a && f) cout << b;
			else if (i == b && f) cout << a;
			else cout << i;
		}
	} else {
		cout << "-1";
	}
	cout << '\n';
	return;
}

signed main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int T = 1; cin >> T;
	while (T--) {	
		solve();
	}
	return 0;
}



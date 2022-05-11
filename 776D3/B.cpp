/**
  *	 author:  Heyya
  *	 created: 03.09.2022 12:24
**/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	ll l, r, a;
	cin >> l >> r >> a;
	if (l / a == r / a) {
		cout << (l / a + r % a) << endl;
	} else {
		if (a == 1) {
			cout << r << endl;
		} else {
			cout << max(r / a - 1 + a - 1, r / a + r % a) << endl;
		}
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


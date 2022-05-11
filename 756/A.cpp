/**
  *	 author:  Heyya
  *	 created: 03.07.2022 21:51
**/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	int n;
	cin >> n;
	bool isInside = false;
	if (n % 2 == 0) {
		cout << 0 << endl;
	} else {
		while (n > 10) {
			n /= 10;
			if (n % 2 == 0) {
				isInside = true;
			}
		}
		if (n % 2 == 0) {
			cout << 1 << endl;
		} else if (isInside) {
			cout << 2 << endl;
		} else {
			cout << -1 << endl;
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


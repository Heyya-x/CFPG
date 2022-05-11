/**
  *	 author:  Heyya
  *	 created: 03.11.2022 22:36
**/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	int n;
	cin >> n;
	int x = n / 3;
	int res = n % 3;
	if (res == 0) {
		while (x--) cout << "21";
	} else if (res == 1 || res == 2) {
		if (res == 2) cout << 2;
		while (x--) cout << "12";
		if (res == 1) cout << 1;
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


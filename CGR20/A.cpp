/**
  *	 author:  Heyya
  *	 created: 05.10.2022 16:30
**/
#include <bits/stdc++.h>
using namespace std;
using LL = long long;

void solve() {
	int n; cin >> n;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		ans += x - 1;
	}
	if (ans & 1) {
		cout << "errorgorn\n";
	} else {
		cout << "maomao90\n";
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


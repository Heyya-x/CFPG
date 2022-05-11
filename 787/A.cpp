/**
  *	 author:  Heyya
  *	 created: 05.07.2022 16:51
**/
#include <bits/stdc++.h>
using namespace std;
using LL = long long;

void solve() {
	int a, b, c, x, y; cin >> a >> b >> c >> x >> y;
	if (a + c >= x && b + c >= y && (a + b + c) >= (x + y)) {
		cout << "Yes\n";
	} else cout << "No\n";
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


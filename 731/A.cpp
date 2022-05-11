/**
  *	 author:  Heyya
  *	 created: 05.04.2022 14:46
**/
#include <bits/stdc++.h>
using namespace std;
using LL = long long;

void solve() {
	int x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	int ans = abs(x1 - x2) + abs(y1 - y2);
	if (x1 == x2 && x1 == x3 && ((y1 < y3 && y3 < y2) || (y1 > y3 && y3 > y2))){
		ans += 2;
	}
	if (y1 == y2 && y1 == y3 && ((x1 < x3 && x3 < x2) || (x1 > x3 && x3 > x2))) {
		ans += 2;
	}
	cout << ans << "\n";
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


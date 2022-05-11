/**
  *	 author:  Heyya
  *	 created: 12.31.2021 21:25
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n, m, rb, cb, rd, cd;
	cin >> n >> m >> rb >> cb >> rd >> cd;
	int ans = INT_MAX;
	if (rb <= rd) ans = min(ans, rd - rb);
	else { ans = min(ans, 2 * n - rd - rb); }
	if (cb <= cd) ans = min(ans, cd - cb);
	else { ans = min(ans, 2 * m - cd - cb); } 
	cout << ans << '\n';
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



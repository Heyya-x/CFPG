/**
  *	 author:  Heyya
  *	 created: 05.15.2022 22:27
**/
#include <bits/stdc++.h>
using namespace std;
using LL = long long;

void solve() {
	int n; cin >> n;
	LL sum = 0, mn = LLONG_MAX;
	for (int i = 0; i < n; i++) {
		LL x; cin >> x;
		sum += x;
		mn = min(mn, x);
	}
	cout << (sum - n * mn) << "\n";
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


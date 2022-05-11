/**
  *	 author:  Heyya
  *	 created: 03.12.2022 20:10
**/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	int n;
	cin >> n;
	long long maxn = 0;
	long long res = 0;
	for (int i = 0; i < n; i++) {
		long long x;
		cin >> x;
		res += x;
		if (res < 0) maxn = max(maxn, -res);
	}
	cout << maxn << "\n";
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


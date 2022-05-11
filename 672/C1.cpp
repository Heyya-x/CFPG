/**
  *	 author:  Heyya
  *	 created: 03.12.2022 20:35
**/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	int n, k;
	cin >> n >> k;
	vector<ll> q(n);
	for (int i = 0; i < n; i++) {
		cin >> q[i];
	}
	vector<pair<ll, ll>> dp(n);
	dp[0] = {q[0], 0};
	for (int i = 1; i < n; i++) {
		dp[i].first = max(dp[i - 1].first, dp[i - 1].second + q[i]);
		dp[i].second = max(dp[i - 1].second, dp[i - 1].first - q[i]);
	}
	cout << max(dp[n - 1].first, dp[n - 1].second) << "\n";
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


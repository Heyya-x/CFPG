/**
  *	 author:  Heyya
  *	 created: 05.09.2022 15:06
**/
#include <bits/stdc++.h>
using namespace std;
using LL = long long;

constexpr int mod = 1e9 + 7;

vector<int> q;
vector<int> dp(40010);

void solve() {
	int n; cin >> n;
	cout << dp[n] << "\n";
	return;
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int T = 1; cin >> T;
	for (int i = 1; i <= 40000; i++) {
		string s1 = to_string(i);
		string s2 = s1;
		reverse(s2.begin(), s2.end());
		if (s1 == s2) q.push_back(i);
	}
	for (auto x : q) {
		dp[0] = 1;
		for (int j = x; j <= 40000; j++) {
			dp[j] = (dp[j] + dp[j - x]) % mod;
		}
	}
	while (T--) {	
		solve();
	}
	return 0;
}


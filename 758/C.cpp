/**
  *	 author:  Heyya
  *	 created: 04.30.2022 23:41
**/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

constexpr int mod = 1e9 + 7;

vector<ll> q;
vector<ll> dp(40001);

bool isOk(int x) {
	string s1, s2;
	s1 = to_string(x);
	s2 = s1;
	reverse(s2.begin(), s2.end());
	return s1 == s2;
}

void solve() {
	int n; cin >> n;	
	cout << dp[n] << "\n";
	return;
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int T = 1; cin >> T;
	for (int i = 1; i <= 40000; i++) {
		if (isOk(i)) q.push_back(i);
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


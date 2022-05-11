/**
  *	 author:  Heyya
  *	 created: 05.05.2022 15:53
**/
#include <bits/stdc++.h>
using namespace std;
using LL = long long;

void solve() {
	int a, b, k; cin >> a >> b >> k;
	int gcd = __gcd(a, b);
	map<int, int> mp;
	int all = 0;
	for (int i = 2; i * i <= a; i++) {
		int cnt = 0;
		while (a % i == 0) {
			cnt++;	
			a /= i;
		}
		if (cnt > 0) {
			mp[i] = cnt;
			all += cnt;
		}
	}
	if (a > 1) {
		mp[a] = 1;
		all += 1;
	}
	for (int i = 2; i * i <= b; i++) {
		int cnt = 0;
		while (b % i == 0) {
			cnt++;	
			b /= i;
		}
		if (cnt > 0) { 
			mp[i] = abs(mp[i] - cnt);
			all += cnt;
		}
	}
	if (b > 1) {
		mp[b] = abs(mp[b] - 1);
		all += 1;
	}
	int res = 0;
	for (auto [u, v] : mp) {
		res += v;
	}
	if (a == b) {
		cout << (0 <= k && k <= all ? "YES" : "NO") << "\n";
	} else if (gcd == a || gcd == b) {
		cout << (1 <= k && k <= all ? "YES" : "NO") << "\n";
	} else {
		cout << (2 <= k && k <= all ? "YES" : "NO") << "\n";
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


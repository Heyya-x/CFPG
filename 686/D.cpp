/**
  *	 author:  Heyya
  *	 created: 05.02.2022 23:10
**/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool isPrime(ll x) {
	if (x <= 3) return x > 1;
	if (x % 6 != 1 && x % 6 != 5) return false;
	ll q = sqrt(x);
	for (ll i = 5; i <= q; i += 6) {
		if (x % i == 0 || x % (i + 2) == 0) {
			return false;
		}
	}
	return true;
}


void solve() {
	ll n; cin >> n;	

	if (isPrime(n)) {
		cout << "1\n" << n << "\n";
		return ;
	}
	int mx = 0;
	unordered_map<ll, int> mp;
	for (ll i = 2; i * i <= n; i++) {
		if (n % i != 0) continue;
		while (n % i == 0) {
			mp[i]++;
			n /= i;
			mx = max(mx, mp[i]);
		}
	}
	if (n != 1) {
		mp[n]++;
		mx = max(mx, mp[n]);
	}
	vector<ll> q(mx, 1);
	for (auto [u, v] : mp) {
		q[mx - v] *= u;
	}
	cout << mx << "\n";
	ll cur = 1;
	for (auto x : q) {
		cur *= x;
		cout << cur << " ";
	}
	cout << "\n";
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

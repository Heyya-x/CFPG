/**
  *	 author:  Heyya
  *	 created: 04.15.2022 21:48
**/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	int n;
	cin >> n;
	priority_queue<ll> pq;
	ll sum = 0;
	for (int i = 0; i < n; i++) {
		ll x;
		cin >> x;
		sum += x;
		pq.push(x);
	}
	priority_queue<ll> res;
	res.push(sum);
	bool ans = true;
	while (!res.empty()) {
		if (res.top() < pq.top()) {
			ans = false;
			break;
		} else if (res.top() == pq.top()) {
			res.pop();
			pq.pop();
		} else {
			ll a = (res.top() + 1) / 2;
			ll b = res.top() / 2;
			res.pop();
			res.push(a);
			res.push(b);
		}
	}
	if (res.empty() && pq.empty() && ans) cout << "YES\n";
	else cout << "NO\n";
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


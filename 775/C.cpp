/**
  *	 author:  Heyya
  *	 created: 03.06.2022 18:47
**/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	int n, m;
	cin >> n >> m;
	map<int, pair<vector<ll>, vector<ll>>> mp;
	for (ll i = 0; i < n; i++) {
		for (ll j = 0; j < m; j++) {
			int x;
			cin >> x;
			mp[x].first.push_back(i);
			mp[x].second.push_back(j);
		}
	}
	ll ans = 0;
	for (auto p : mp) {
		auto vec = p.second;
		sort(vec.first.rbegin(), vec.first.rend());
		sort(vec.second.rbegin(), vec.second.rend());
		int k = vec.first.size();
		for (int i = 0; i < k; i++) {
			ans += (k - 2 * i - 1) * (vec.first[i] + vec.second[i]);
		}
	}
	cout << ans << endl;
	return;
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int T = 1; //cin >> T;
	while (T--) {	
		solve();
	}
	return 0;
}


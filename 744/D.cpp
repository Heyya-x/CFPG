/**
  *	 author:  Heyya
  *	 created: 05.21.2022 20:28
**/
#include <bits/stdc++.h>
using namespace std;
using LL = long long;
using PII = pair<int, int>;

void solve() {
	int n; cin >> n;
	priority_queue<PII> pq;
	vector<PII> ans;
	for (int i = 1; i <= n; i++) {
		int x; cin >> x;
		if (x > 0) pq.push({x, i});
	}
	while (pq.size() > 1) {
		auto p1 = pq.top(); pq.pop();
		auto p2 = pq.top(); pq.pop();
		ans.push_back({p1.second, p2.second});
		if (p1.first > 1) pq.push({p1.first - 1, p1.second});
		if (p2.first > 1) pq.push({p2.first - 1, p2.second});
	}
	cout << ans.size() << "\n";
	for (auto [u, v] : ans) {
		cout << u << " " << v << "\n";
	}
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int T;
	T = 1;
	cin >> T;
	while (T--) {
		solve();
	}
}


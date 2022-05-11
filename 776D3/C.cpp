/**
  *	 author:  Heyya
  *	 created: 03.10.2022 21:08
**/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct Point {
	int id, x, w;
};

void solve() {
	int n, m;
	cin >> n >> m;
	vector<Point> q(m);
	for (int i = 0; i < m; i++) {
		cin >> q[i].x >> q[i].w;
		q[i].id = i + 1;
	}
	sort(q.begin(), q.end(), [&](Point a, Point b) {
		return a.w < b.w;
	});
	ll ans = 0;
	vector<Point> res;
	for (int i = 0; i < 2 * n; i++) {
		ans += q[i].w;
		res.push_back(q[i]);
	}
	sort(res.begin(), res.end(), [&](Point a, Point b) {
		return a.x < b.x;
	});
	cout << ans << "\n";
	for (int i = 0; i < n; i++) {
		cout << res[i].id << " " << res[2 * n - 1 - i].id << "\n";
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


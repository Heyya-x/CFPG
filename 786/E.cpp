/**
  *	 author:  Heyya
  *	 created: 05.03.2022 18:30
**/
#include <bits/stdc++.h>
using namespace std;
using LL = long long;

void solve() {
	int n; cin >> n;
	vector<int> q(n);
	for (int i = 0; i < n; i++) cin >> q[i];
	auto p = q;
	sort(p.begin(), p.end());
	int mn1 = p[0], mn2 = p[1];
	int ans1 = (mn1 + 1) / 2 + (mn2 + 1) / 2;
	int ans2 = INT_MAX;
	for (int i = 1; i < n; i++) {
		int cur;
		int a1 = min(q[i - 1], q[i]);
		int a2 = max(q[i - 1], q[i]);
		if (a1 * 2 <= a2) {
			cur = (a2 + 1) / 2;	
		} else {
			cur = ceil((1.0 * q[i - 1] + q[i]) / 3);
		}
		ans2 = min(ans2, cur);
		if (i >= 2) {
			if (q[i - 2] == 1 && q[i] == 1) {
				ans2 = 1;
			} else {
				int tt = min(q[i - 2], q[i]);
				int res = tt + (max(q[i - 2], q[i]) - tt + 1) / 2;
				ans2 = min(ans2, res);
			}
		}
	}
	cout << min(ans1, ans2) << "\n";
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


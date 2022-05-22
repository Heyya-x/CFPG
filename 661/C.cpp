/**
  *	 author:  Heyya
  *	 created: 05.22.2022 19:26
**/
#include <bits/stdc++.h>
using namespace std;
using LL = long long;

void solve() {
	int n; cin >> n;
	vector<int> cnt(n + 1);
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		cnt[x]++;
	}
	int ans = 0;
	for (int s = 2; s <= 2 * n; s++) {
		int cur = 0;
		for (int i = 1; i < (s + 1) / 2; i++) {
			if (s - i > n) continue;
			cur += min(cnt[i], cnt[s - i]);
		}
		if (s % 2 == 0) cur += cnt[s / 2] / 2;
		ans = max(ans, cur);
	}
	cout << ans << "\n";
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


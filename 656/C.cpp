/**
  *	 author:  Heyya
  *	 created: 05.06.2022 12:42
**/
#include <bits/stdc++.h>
using namespace std;
using LL = long long;

void solve() {
	int n; cin >> n;
	vector<int> q(n);
	for (int i = 0; i < n; i++) cin >> q[i];
	int ans = 0;
	bool isH = false;
	for (int i = n - 1; i > 0; i--) {
		if (!isH && q[i - 1] >= q[i]) {
			continue;
		} else if (!isH && q[i - 1] < q[i]) {
			isH = true;
		} else if (isH && q[i - 1] > q[i]) {
			ans = i;
			break;
		}
	}
	cout << ans << "\n";
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


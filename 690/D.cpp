/**
  *	 author:  Heyya
  *	 created: 05.14.2022 16:37
**/
#include <bits/stdc++.h>
using namespace std;
using LL = long long;

void solve() {
	int n; cin >> n;
	vector<LL> q(n);
	LL sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> q[i];
		sum += q[i];
	}
	LL ans = n - 1;
	for (int i = n; i >= 1; i--) {
		if (sum % i != 0) continue;
		LL ave = sum / i;
		LL pre = 0;
		bool ok = true;
		for (auto x : q) {
			pre += x;
			if (pre > ave) {
				ok = false;
				break;
			} else if (pre == ave) {
				pre = 0;
			}
		}
		if (ok) {
			ans = n - i;
			break;
		}
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


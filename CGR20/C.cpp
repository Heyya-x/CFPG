/**
  *	 author:  Heyya
  *	 created: 05.10.2022 17:31
**/
#include <bits/stdc++.h>
using namespace std;
using LL = long long;

void solve() {
	int n; cin >> n;
	vector<int> q(n);
	for (int i = 0; i < n; i++) cin >> q[i];
	int l = -1, r = 0;
	for (int i = 1; i < n; i++) {
		if (q[i - 1] == q[i]) {
			if (l == -1) {
				l = i;
			} else {
				r = i - 1;
			}
		}
	}
	if (l == -1 || r < l) {
		cout << "0\n";
	} else if (l == r) {
		cout << "1\n";
	} else {
		cout << r - l << "\n";
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


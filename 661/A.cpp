/**
  *	 author:  Heyya
  *	 created: 05.22.2022 19:13
**/
#include <bits/stdc++.h>
using namespace std;
using LL = long long;

void solve() {
	int n; cin >> n;
	vector<int> q(n);
	for (int i = 0; i < n; i++) {
		cin >> q[i];
	}
	sort(q.begin(), q.end());
	bool ans = true;
	for (int i = 1; i < n; i++) {
		if (abs(q[i] - q[i - 1]) > 1) {
			ans = false;
			break;
		}
	}
	cout << (ans ? "YES\n" : "NO\n");
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


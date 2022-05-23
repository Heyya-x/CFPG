/**
  *	 author:  Heyya
  *	 created: 05.11.2022 20:48
**/
#include <bits/stdc++.h>
using namespace std;
using LL = long long;

void solve() {
	int n; cin >> n;
	vector<int> q(n);
	for (int i = 0; i < n; i++) cin >> q[i];
	cout << ((q[n - 1] - q[0] + 1) - n <= 2 ? "YES\n" : "NO\n");
}

int main() {
	ios::sync_with_stdio(false); cin.tie(nullptr);
	int T;
	T = 1;
	cin >> T;
	while (T--) {
		solve();
	}
}


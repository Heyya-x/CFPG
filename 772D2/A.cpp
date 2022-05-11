/**
  *	 author:  Heyya
  *	 created: 03.01.2022 20:35
**/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	int n;
	cin >> n;
	vector<ll> q(n);
	for (int i = 0; i < n; i++) {
		cin >> q[i];
	}
	sort(q.begin(), q.end());
	
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


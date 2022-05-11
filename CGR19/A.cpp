/**
  *	 author:  Heyya
  *	 created: 02.20.2022 11:53
**/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	int n; cin >> n;
	vector<int> q(n);
	for (int i = 0; i < n; i++) {
		cin >> q[i];
	}
	if (is_sorted(q.begin(), q.end())) {
		cout << "No\n";
	} else {
		cout << "Yes\n";
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



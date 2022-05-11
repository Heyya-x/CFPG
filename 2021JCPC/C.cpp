/**
  *	 author:  Heyya
  *	 created: 04.13.2022 14:15
**/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	vector<int> q(10);
	int sum = 0;
	for (int i = 0; i < 10; i++) {
		cin >> q[i];
		sum += q[i];
	}
	bool ans = true;
	for (int i = 0; i < 10; i++) {
		if (q[i] > sum - q[i] + 1) ans = false;
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

// 0 1 2 3 4 5 6 7 8 9
// 0 5 4 3 4 0 0 0 0 2
//
// 9 9 
// 4 4 4 4
// 3 3 3
// 2 2 2 2
// 1 1 1 1 1

// 1 2 1 2 1 2 1 2 1 4 3 4 3 4 3 9 4 9 
// 121212121434343949
// 121212121343434949



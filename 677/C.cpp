/**
  *	 author:  Heyya
  *	 created: 05.18.2022 19:03
**/
#include <bits/stdc++.h>
using namespace std;
using LL = long long;

void solve() {
	int n; cin >> n;
	vector<int> q(n);
	int cnt = 0;
	int mx = 0;
	int idx = -1;
	for (int i = 0; i < n; i++) {
		cin >> q[i];
		if (q[i] > mx) {
			mx = q[i];
			cnt = 1;
			idx = i + 1;
		} else if (q[i] == mx) {
			cnt++;
		}
	}
	if (cnt == 1) {
		cout << idx << "\n";
		return;
	}
	idx = -1;
	for (int i = 0; i < n; i++) {
		if (q[i] != mx) continue;
		if (i > 0 && q[i - 1] < q[i]) {
			idx = i + 1;
			break;
		} else if (i < n - 1 && q[i] > q[i + 1]) {
			idx = i + 1;
			break;
		}
	}
	cout << idx << "\n";
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


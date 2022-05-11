/**
  *	 author:  Heyya
  *	 created: 03.06.2022 17:55
**/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	int n;
	cin >> n;
	vector<int> q(n);
	int l = 0, r = n - 1;
	for (int i = 0; i < n; i++) {
		cin >> q[i];
	}
	for (int i = 1; i < n; i++) {
		if (q[i] == 0) {
			break;
		} else {
			l++;
		}
	}
	for (int i = n - 2; i >= 0; i--) {
		if (q[i] == 0) {
			break;
		} else {
			r--;
		}
	}
	if (r <= l) {
		cout << 0 << endl;
	} else {
		cout << r - l << endl;
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


/**
  *	 author:  Heyya
  *	 created: 02.16.2022 22:04
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
	int l = 0, r = 0;
	for (int i = 0; i < n; i++) {
		if (q[i] != i + 1) {
			l = i;
			for (int j = i + 1; j < n; j++) {
				if (q[j] == l + 1) {
					r = j;
					break;
				}
			}
			break;	
		}
	}
	for (int i = 0; i < l; i++) {
		cout << q[i] << " ";
	}
	for (int i = r; i >= l; i--) {
		cout << q[i] << " ";
	}
	for (int i = r + 1; i < n; i++) {
		cout << q[i] << " ";
	}
	cout << "\n";
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



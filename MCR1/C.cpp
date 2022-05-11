/**
  *	 author:  Heyya
  *	 created: 03.30.2022 18:07
**/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	int n;
	cin >> n;
	vector<int> L(n), R(n);
	for (int i = 0; i < n; i++) {
		cin >> L[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> R[i];
	}
	vector<int> q(n);
	for (int i = 0; i < n; i++) {
		q[i] = n - L[i] - R[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			L[i] -= (q[j] > q[i]);	
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			R[i] -= (q[j] > q[i]);
		}
	}
	for (int i = 0; i < n; i++) {
		if (L[i] != 0 || R[i] != 0) {
			cout << "NO\n";
			return;
		}
	}
	cout << "YES\n";
	for (auto x : q) {
		cout << x << " ";
	}
	return;
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int T = 1; //cin >> T;
	while (T--) {	
		solve();
	}
	return 0;
}


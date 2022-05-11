/**
  *	 author:  Heyya
  *	 created: 05.04.2022 17:02
**/
#include <bits/stdc++.h>
using namespace std;
using LL = long long;

void solve() {
	int n, k; cin >> n >> k;
	vector<int> a(k);
	vector<int> t(k);
	for (int i = 0; i < k; i++) cin >> a[i];
	for (int i = 0; i < k; i++) cin >> t[i];
	vector<LL> c(n, INT_MAX);
	for (int i = 0; i < k; i++) {
		c[a[i] - 1] = t[i];
	}
	vector<LL> L(n, INT_MAX);
	LL p = INT_MAX;
	for (int i = 0; i < n; i++) {
		p = min(p + 1, c[i]);
		L[i] = p;
	}
	vector<LL> R(n, INT_MAX);
	p = INT_MAX;
	for (int i = n - 1; i >= 0; i--) {
		p = min(p + 1, c[i]);
		R[i] = p;
	}
	for (int i = 0; i < n; i++) {
		cout << min(L[i], R[i]) << " ";
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


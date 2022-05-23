/**
  *	 author:  Heyya
  *	 created: 05.08.2022 19:50
**/
#include <bits/stdc++.h>
using namespace std;
using LL = long long;

void solve() {
	int n; cin >> n;
	vector<int> a(n);
	int k = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] < 0) {
			k++;
			a[i] = - a[i];
		}
	}	
	for (int i = 0; i < k; i++) {
		a[i] = -a[i];
	}
	if (is_sorted(a.begin(), a.end())) {
		cout << "Yes\n";
	} else {
		cout << "No\n";
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


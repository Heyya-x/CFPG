/**
  *	 author:  Heyya
  *	 created: 03.12.2022 20:21
**/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	int n;
	cin >> n;
	int odd = 0;
	bool isDiff = false;
	vector<int> q(n);
	for (int i = 0; i < n; i++) {
		cin >> q[i];
		if (q[i] & 1) odd++;
	}
	sort(q.begin(), q.end());
	for (int i = 0; i < n - 1; i++) {
		if (q[i] + 1 == q[i + 1]) isDiff = true;
	}
	if (odd % 2 == 0) {
		cout << "Yes\n";
	} else {
		cout << (isDiff ? "Yes\n" : "No\n");	
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


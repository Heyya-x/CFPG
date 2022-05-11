/**
  *	 author:  Heyya
  *	 created: 12.17.2021 12:57
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	long long q[n];
	long long g[2] = {0, 0};
	for (int i = 0; i < n; i++) {
		cin >> q[i];
		g[i % 2] = __gcd(g[i % 2], q[i]);
	}
	for (int i = 0; i < 2; i++) {
		bool ok = true;
		for (int j = 0; j < n; j++) {
			if (i % 2 != j % 2 && q[j] % g[i] == 0) {
				ok = false;
				break;
			}
		}
		if (ok) {
			cout << g[i] << '\n';
			return;
		}
	}
	cout << "0\n";
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



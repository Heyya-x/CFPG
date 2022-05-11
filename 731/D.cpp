/**
  *	 author:  Heyya
  *	 created: 05.04.2022 15:39
**/
#include <bits/stdc++.h>
using namespace std;
using LL = long long;

void solve() {
	int n; cin >> n;
	vector<int> x(n);
	for (int i = 0; i < n; i++) cin >> x[i];
	vector<int> y(n, 0);
	vector<int> a(n);
	y[0] = 0;
	a[0] = x[0];
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < 30; j++) {
			if ((a[i - 1] & (1 << j)) != 0) {
				if ((x[i] & (1 << j)) == 0) y[i] += (1 << j);
			}
		}
		a[i] = x[i] ^ y[i];
	}
	for (auto xx : y) {
		cout << xx << " ";
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


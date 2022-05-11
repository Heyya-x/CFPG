/**
  *	 author:  Heyya
  *	 created: 04.25.2022 22:40
**/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	long long n, a, b;
	cin >> n >> a >> b;
	if (a == 1) {
		if ((n - 1) % b == 0) {
			cout << "Yes\n";
		} else {
			cout << "No\n";
		}
		return;
	}
	for (long long i = 1; i <= n; i *= a) {
		if (i % b == n % b) {
			cout << "Yes\n";
			return;
		}
	}
	cout << "No\n";
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


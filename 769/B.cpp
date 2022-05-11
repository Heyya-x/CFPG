/**
  *	 author:  Heyya
  *	 created: 03.12.2022 19:02
**/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	int n;
	cin >> n;
	int k = 0;
	while (1 << (k + 1) <= (n - 1)) k++;
	for (int i = (1 << k) - 1; i >= 0; i--) {
		cout << i << " ";
	}
	for (int i = (1 << k); i < n; i++) {
		cout << i << " ";
	}
	cout << endl;
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


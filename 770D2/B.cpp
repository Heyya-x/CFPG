/**
  *	 author:  Heyya
  *	 created: 02.06.2022 22:47
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n, x, y;
	cin >> n >> x >> y;
	for (int i = 0; i < n; i++) {
		int temp; cin >> temp;
		x ^= temp;
	}
	if ((x & 1) == (y & 1)) {
		cout << "Alice\n";
	} else {
		cout << "Bob\n";
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



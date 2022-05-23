/**
  *	 author:  Heyya
  *	 created: 05.15.2022 22:22
**/
#include <bits/stdc++.h>
using namespace std;
using LL = long long;

void solve() {
	char q[6];
	for (int i = 0; i < 6; i++) cin >> q[i];
	int a =	0, b = 0;
	for (int i = 0; i < 3; i++) a += q[i] - '0';
	for (int i = 3; i < 6; i++) b += q[i] - '0';
	cout << (a == b ? "YES\n" : "NO\n");

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


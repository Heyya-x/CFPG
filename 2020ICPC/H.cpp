/**
  *	 author:  Heyya
  *	 created: 05.19.2022 22:09
**/
#include <bits/stdc++.h>
using namespace std;
using LL = long long;

void solve() {
	int q[4];
	for (int i = 0; i < 4; i++) cin >> q[i];
	int neg = q[0] + q[1];
	if (neg & 1) {
		cout << (q[0] + q[3] > 0 ? "Ya " : "Tidak ");
		cout << (q[1] + q[2] > 0 ? "Ya " : "Tidak ");
	} else {
		cout << "Tidak Tidak ";
	}
	if (neg & 1) {
		cout << "Tidak Tidak ";
	} else {
		cout << (q[1] + q[2] > 0 ? "Ya " : "Tidak ");
		cout << (q[0] + q[3] > 0 ? "Ya " : "Tidak ");
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


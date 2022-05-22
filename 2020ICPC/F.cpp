/**
  *	 author:  Heyya
  *	 created: 05.21.2022 14:57
**/
#include <bits/stdc++.h>
using namespace std;
using LL = long long;

void solve() {
	int n; cin >> n;
	vector<int> q(n + 1);
	cout << "? " << 1 << " " << n << "\n";
	int res; cin >> res;
	for (int i = n - 1; i >= 2; i--) {
		cout << "? " << 1 << " " << i << "\n";
		int cur; cin >> cur;
		q[i + 1] = res - cur;
		res = cur;
	}
	cout << "? 2 3\n";
	int cur; cin >> cur;
	q[2] = cur - q[3];
	q[1] = res - q[2];
	
	cout << "! ";
	for (int i = 1; i <= n; i++) {
		cout << q[i] << " \n"[i == n];
	}
	return;
}

int main() {
	// ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int T;
	T = 1;
	while (T--) {
		solve();
	}
}


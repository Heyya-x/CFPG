/**
  *	 author:  Heyya
  *	 created: 04.13.2022 20:00
**/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	int n;	
	cin >> n;
	vector<int> q(n + 1, 0);
	int cnt = 1;
	for (int i = 2; i <= n; i++) {
		if (q[i] != 0) continue;
		for (int j = i; j <= n; j += i) {
			if (q[j] == 0) q[j] = cnt;
		}
		cnt++;
	}
	for (int i = 2; i <= n; i++) {
		cout << q[i] << " \n"[i == n];
	}
	return;
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int T = 1; //cin >> T;
	while (T--) {	
		solve();
	}
	return 0;
}

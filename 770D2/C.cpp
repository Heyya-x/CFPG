/**
  *	 author:  Heyya
  *	 created: 02.06.2022 23:37
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n, k; cin >> n >> k;
	if (k == 1) {
		cout << "Yes\n";
		for (int i = 1; i <= n; i++) cout << i << "\n";
	} else if (n & 1) {
		cout << "No\n";
	} else {
		cout << "Yes\n";
		for (int i = 1; i <= n; i++) {
			for (int j = 0; j < k; j++) {
				cout << i + j * n << " "; 
			}
			cout << "\n";
		}
	}
	return;
}

int main() {
	//ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int T = 1; cin >> T;
	while (T--) {	
		solve();
	}
	return 0;
}



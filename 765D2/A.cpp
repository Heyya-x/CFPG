/**
  *	 author:  Heyya
  *	 created: 01.31.2022 00:04
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n, l;
	cin >> n >> l;
	int ones[l];
	memset(ones, 0, sizeof(ones));
	for (int i = 0; i < n; i++) {
		long long temp; cin >> temp;
		for (int j = 0; j < l; j++) {
			if (temp & (1<<j)) ones[j]++;
			else ones[j]--;
		}
	}
	long long ans = 0;
	for (int i = l - 1; i >= 0; i--) {
		if (ones[i] > 0) ans = ans * 2 + 1;
		else ans = ans * 2;
	}
	cout << ans << "\n";
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



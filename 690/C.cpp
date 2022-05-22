/**
  *	 author:  Heyya
  *	 created: 05.14.2022 16:25
**/
#include <bits/stdc++.h>
using namespace std;
using LL = long long;

void solve() {
	int n; cin >> n;
	string ans = "";
	for (int i = 9; i >= 1; i--) {
		if (n == 0) break;
		if (n >= i) {
			ans = (char)(i + '0') + ans;	
			n -= i;
		}
	}
	if (n > 0) {
		cout << "-1\n";
	} else {
		cout << ans << "\n";
	}
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int T;
	T = 1;
	cin >> T;
	while (T--) {
		solve();
	}
}


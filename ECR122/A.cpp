/**
  *	 author:  Heyya
  *	 created: 02.07.2022 13:16
**/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	int n; cin >> n;
	if (n % 7 == 0) {
		std::cout << n << endl;
	} else {
		n /= 10;
		n = n * 10 + 9;
		n -= n % 7;
		std::cout << n << endl;
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



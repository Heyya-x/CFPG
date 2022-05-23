/**
  *	 author:  Heyya
  *	 created: 05.19.2022 23:00
**/
#include <bits/stdc++.h>
using namespace std;
using LL = long long;

void solve() {
	LL n; cin >> n;
	LL a = 0;
	while (n) {
		if (n < 5) {
			a += max(1LL, n - 1);
			break;
		}
		if (n % 2 == 1 || n % 4 == 0) a++, n--;
		else a += n / 2, n /= 2;
		
		if (n < 5) {
			a += 1;
			break;
		}
		if (n == 0) break;		
		if (n % 2 == 1 || n % 4 == 0) n--;
		else n /= 2;
	}
	cout << a << "\n";
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


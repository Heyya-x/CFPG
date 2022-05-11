/**
  *	 author:  Heyya
  *	 created: 04.15.2022 19:58
**/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	int n;
	cin >> n;
	int a, b, c;
	if (n % 2 == 0) {
		a = n - 3;
		b = 2;
		c = 1;
	} else if (n % 4 == 1) {
		a = floor(n / 2) - 1;
		b = floor(n / 2) + 1;
		c = 1;
	} else {
		a = floor(n / 2) - 2;
		b = floor(n / 2) + 2;
		c = 1;
	}
	cout << a << " " << b << " " << c << "\n";
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


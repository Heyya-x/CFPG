/**
  *	 author:  Heyya
  *	 created: 05.06.2022 12:25
**/
#include <bits/stdc++.h>
using namespace std;
using LL = long long;

void solve() {
	int x, y, z; cin >> x >> y >> z;	
	int a = min(x, y), b = min(x, z), c = min(y, z);
	if (x == max(a, b) && y == max(a, c) && z == max(b, c)) {
		cout << "YES\n";
		cout << a << " " << b << " " << c << "\n";
	} else {
		cout << "NO\n";
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


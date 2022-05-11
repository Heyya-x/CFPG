/**
  *	 author:  Heyya
  *	 created: 03.31.2022 12:21
**/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	string s;
	cin >> s;
	int n = s.length();
	cout << "3\n";
	cout << "L 2\n";
	cout << "R 2\n";
	cout << "R " << 2 * (int)s.length() - 1 << "\n";
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


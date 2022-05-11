/**
  *	 author:  Heyya
  *	 created: 01.01.2022 20:59
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int a, b, c;
	cin >> a >> b >> c;
	if ((a + b == c) || (a + c == b) || (b + c) == a || (a == b && !(c & 1)) || (a == c && !(b & 1)) || (b == c && !(a & 1))) {
		cout << "Yes";
	} else {
		cout << "No";
	}
	cout << '\n';
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



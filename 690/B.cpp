/**
  *	 author:  Heyya
  *	 created: 05.14.2022 16:20
**/
#include <bits/stdc++.h>
using namespace std;
using LL = long long;

string ss = "2020";

void solve() {
	int n; cin >> n;
	string s; cin >> s;
	int l = 0, r = 0;
	for (int i = 0; i < 4; i++) {
		if (s[i] == ss[i]) l++;
		else break;
	}
	for (int i = 1; i <= 4; i++) {
		if (s[n - i] == ss[4 - i]) r++;
		else break;
	}
	cout << (l + r >= 4 ? "YES\n" : "NO\n");
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


/**
  *	 author:  Heyya
  *	 created: 05.18.2022 18:55
**/
#include <bits/stdc++.h>
using namespace std;
using LL = long long;

void solve() {
	string s;
	cin >> s;
	int cur = s[0] - '0';
	int pre = 10 * (cur - 1);
	for (int i = 1; i <= (int)s.size(); i++) pre += i;
	cout << pre << "\n";
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


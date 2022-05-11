/**
  *	 author:  Heyya
  *	 created: 05.05.2022 15:46
**/
#include <bits/stdc++.h>
using namespace std;
using LL = long long;

void solve() {
	int n; cin >> n;
	vector<int> s(n);
	int l = 0, r = 0;
	for (int i = 0; i < n; i++) {
		cin >> s[i];
		if (s[i] == 1 || s[i] == + n) {
			l = max(l, i + 1);
			r = max(r, n - i);
		}
	}
	int ans = n - l + n - r + 2;
	cout << min(l, min(r, ans)) << "\n";
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


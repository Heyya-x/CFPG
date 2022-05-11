/**
  *	 author:  Heyya
  *	 created: 05.06.2022 15:51
**/
#include <bits/stdc++.h>
using namespace std;
using LL = long long;

int div(string &a, int l, int r, char ch) {
	if (r - l == 1) return (a[l] != ch);
	int m = (l + r) / 2;
	int t1 = div(a, l, m, ch + 1);
	for (int i = m; i < r; i++) {
		t1 += (a[i] != ch);
	}
	int t2 = div(a, m, r, ch + 1);
	for (int i = l; i < m; i++) {
		t2 += (a[i] != ch);
	}
	return min(t1, t2);
}

void solve() {
	int n; string s;
	cin >> n >> s;
	int ans = div(s, 0, n, 'a');	
	cout << ans << "\n";
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


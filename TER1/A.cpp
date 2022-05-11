/**
  *	 author:  Heyya
  *	 created: 11.20.2021 12:53
  *  stoped: 13:14
  *  back: 15:58
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool isPrime(int x) {
	if (x <= 1) return false;
	int end = sqrt(x);
	for (int i = 2; i <= end; i++)
		if (x % i == 0) return false;
	return true;
}

void solve() {
	int n; cin >> n;
	vector<vector<int>> s(n, vector<int>(2));
	int sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> s[i][0];
		sum += s[i][0];
		s[i][1] = i + 1;
	}
	sort(s.begin(), s.end());
	int i = 0;
	for (; i < n; i++) {
		if (isPrime(sum)) break;
		else sum -= s[i][0];
	}
	cout << n - i - 1 << '\n';
	for (;i < n; i++)
		cout << s[i][1] << ' ';
	cout << '\n';
	return;
}

signed main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int T = 1; cin >> T;
	while (T--) {	
		solve();
	}
	return 0;
}



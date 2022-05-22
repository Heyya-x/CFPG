/**
  *	 author:  Heyya
  *	 created: 05.18.2022 14:43
**/
#include <bits/stdc++.h>
using namespace std;
using LL = long long;

void solve() {
	LL k; cin >> k;
	string s = "codeforces";
	int n = s.size();
	vector<LL> a(n, 1);
	LL res = 1;
	for (int it = 0; res < k; it = (it + 1) % n) {
		res = res / a[it] * (a[it] + 1);
		a[it]++;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < a[i]; j++) {
			cout << s[i];
		}
	}
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int T;
	T = 1;
	while (T--) {
		solve();
	}
}


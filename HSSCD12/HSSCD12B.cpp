#include <bits/stdc++.h>
#define INF 1e9
#define ll long long
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

void solve() {
	string s, t;
	cin >> s >> t;
	int n = s.size(), m = t.size();
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n - i; ++j) {
			int k = m - 1 - j;
			if (i + j < k)
				continue;
			string c1 = s.substr(i, m - k), c2 = s.substr(i + j - k, k);
			reverse(c2.begin(), c2.end());
			if (c1 + c2 == t) {
				cout << "YES" << endl;
				return ;
			}	
		}
	}
	cout << "NO" << '\n';
	return;	
}

int main() {
	IOS;
	int INPUT;cin >> INPUT;
	while (INPUT--)
		solve();
	return 0;
}


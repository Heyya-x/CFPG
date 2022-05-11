/**
  *	 author:  Heyya
  *	 created: 11.12.2021 23:25
**/
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	int n_1 = 0;
	for (int i = 0; i < n; i++)
		if (s[i] == '1') n_1++;
	vector<int> a;
	for (int i = 0; i < n - n_1; i++) {
		if (s[i] == '1')
			a.push_back(i + 1);
	}
	int swap = a.size();
	for (int i = n - 1; i >= 0; i--) {
		if (a.size() == 2 * swap) break;
		if (s[i] == '0')
			a.push_back(i + 1);
		}
	cout << (a.size() ? 1 : 0);
	if (a.size()) {
		sort(a.begin(), a.end());
		cout << '\n' << a.size();
		for (int x : a)
			cout << ' ' << x;	
	}
	cout << '\n';
	return;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {	
		solve();
	}
	return 0;
}



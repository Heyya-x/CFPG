/**
  *	 author:  Heyya
  *	 created: 01.01.2022 21:17
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n; cin >> n;
	vector<pair<int, pair<int, int>>> q(n + 1);
	vector<int> a(n + 1);
	for (int i = 1; i <= n; i++) {
		int temp; cin >> temp;
		q[i].second.first = temp;
		q[i].second.second = i;
	}
	string s; cin >> s;
	for (int i = 0; i < n; i++) {
		q[i + 1].first = s[i] - '0';
	}
	sort(q.begin() + 1, q.end());
	for (int i = 1; i <= n; i++) {
		a[q[i].second.second] = i;
	}
	for (int i = 1; i <= n; i++) {
		cout << a[i] << ' ';
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



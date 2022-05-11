/**
  *	 author:  Heyya
  *	 created: 01.03.2022 15:14
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int get(vector<int> &fa, int x) {
	return (fa[x] == x ? x : fa[x] = get(fa, fa[x]));
}

void _union(vector<int> &fa, int x, int y) {
	fa[get(fa, x)] = get(fa, y);
}

void solve() {
	string s; cin >> s;
	int n = (int)s.length();
	vector<int> fa(n);
	for (int i = 0; i < n; i++) fa[i] = i;
	for (int i = 0; i < n; i++) {
		if (s[i] == 'E') _union(fa, i, (i + 1) % n);
		//else _union(fa, (i - 1 + n) % n, (i + 1) % n);
	}
	for (int i = 0; i < n; i++) {
		if (s[i] == 'E' && get(fa, i) != get(fa, (i + 1) % n) || s[i] == 'N' && get(fa, i) == get(fa, (i + 1) % n)) {
			cout << "NO\n";
			return;
		}
	}
	cout << "YES\n";
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



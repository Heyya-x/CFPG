/**
  *	 author:  Heyya
  *	 created: 05.08.2022 17:20
**/
#include <bits/stdc++.h>
using namespace std;
using LL = long long;

vector<int> fa(26);

int find(int x) {
	return (fa[x] == x ? x : fa[x] = find(fa[x]));
}

void solve() {
	int n, k; string s;
	cin >> n >> k >> s;
	for (int i = 0; i < 26; i++) fa[i] = i;
	for (int i = 0; i < n; i++) {
		int ch = s[i] - 'a';
		while (ch > 0 && k > 0 && fa[ch] == ch) {
			fa[ch] = ch - 1;
			ch--;
			k--;
		}
	}
	for (int i = 0; i < n; i++) {
		int x = find(s[i] - 'a');
		char ch = 'a' + x;
		cout << ch;
	}
	cout << "\n";
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


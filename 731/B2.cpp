/**
  *	 author:  Heyya
  *	 created: 05.04.2022 15:12
**/
#include <bits/stdc++.h>
using namespace std;
using LL = long long;

void solve() {
	string s; cin >> s;
	deque<char> dq;
	for (char ch : s) dq.push_front(ch);
	char ch;
	if (dq.front() > dq.back()) {
		ch = dq.front(); dq.pop_front();	
	} else {
		ch = dq.back(); dq.pop_back();
	}
	if (ch - 'a' + 1 != (int)s.length()) {
		cout << "NO\n";
		return;
	}
	while (!dq.empty()) {
		if (dq.front() + 1 == ch) {
			ch = dq.front(); dq.pop_front();	
		} else if (dq.back() + 1 == ch) {
			ch = dq.back(); dq.pop_back();
		} else {
			break;
		}
	}
	if (dq.empty()) cout << "YES\n";
	else cout << "NO\n";
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


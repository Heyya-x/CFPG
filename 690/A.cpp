/**
  *	 author:  Heyya
  *	 created: 05.14.2022 16:16
**/
#include <bits/stdc++.h>
using namespace std;
using LL = long long;

void solve() {
	int n; cin >> n;
	deque<int> dq;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		dq.push_back(x);
	}
	while (!dq.empty()) {
		int x = dq.front(); dq.pop_front(); 
		cout << x <<  " ";
		if (!dq.empty()) {
			x = dq.back(); dq.pop_back();
			cout << x << " ";
		}
	}
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int T;
	T = 1;
	cin >> T;
	while (T--) {
		solve();
	}
}


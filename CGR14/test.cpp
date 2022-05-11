/**
  *	 author:  Heyya
  *	 created: 04.30.2022 16:11
**/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	auto cmp = [] (int a, int b) {
		return a < b;
	};
	priority_queue<int, vector<int>, decltype(cmp)> pq(cmp);
	for (int i = 0; i < 10; i++) {
		pq.push(i);
	}
	while (!pq.empty()) {
		cout << pq.top() << " ";
		pq.pop();
	}
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


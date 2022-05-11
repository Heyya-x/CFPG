/**
  *	 author:  Heyya
  *	 created: 04.15.2022 20:59
**/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	int n;
	cin >> n;
	set<int> st;
	for (int i = 1; i <= n; i++) st.insert(i);
	vector<int> res;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		if (st.count(x)) st.erase(x);
		else res.push_back(x);
			
	}
	sort(res.begin(), res.end());
	bool ans = true;
	for (auto &nx : res) {
		auto it = st.begin();
		if (*it > (nx - 1) / 2) {
			ans = false;
			break;
		} else {
			st.erase(it);
		}
	}
	if (ans) {
		cout << res.size() << "\n";
	} else {
		cout << "-1\n";
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
// 1 2 3 4 5 6 7 8 9
// 2: 0
// 3: 0 1
// 4: 0 1
// 7: 0 1 2 3
// 8: 0 1 2 3
// (n - 1) / 2;

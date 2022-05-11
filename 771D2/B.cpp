/**
  *	 author:  Heyya
  *	 created: 02.16.2022 22:27
**/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	int n; cin >> n;
	vector<int> odd, even;
	for (int i = 0; i < n; i++) {
		int temp; cin >> temp;
		if (temp & 1) odd.push_back(temp);
		else even.push_back(temp);
	}
	if (is_sorted(odd.begin(), odd.end()) && is_sorted(even.begin(), even.end())) {
		cout << "Yes\n";
	} else {
		cout << "No\n";
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



/**
  *	 author:  Heyya
  *	 created: 03.12.2022 19:45
**/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	int n;
	cin >> n;
	vector<int> q(n);
	for (int i = 0; i < n; i++) cin >> q[i];
	sort(q.begin(), q.end());
	int k = 0;
	vector<int> ans;
	int mid = n / 2;
	for (int i = 0; i < (n - 1) / 2; i++) {
		ans.push_back(q[mid + i]);
		ans.push_back(q[i]);
		if (q[i] < q[mid + i] && q[i] < q[mid + i + 1]) k++;
	}
	if (n % 2 == 0) {
		ans.push_back(q[n - 1]);
		ans.push_back(q[mid - 1]);
	}
	else ans.push_back(q[n - 1]);
	cout << k << "\n";
	for (int i = 0; i < n; i++) {
		cout << ans[i] << " ";
	}
	return;
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int T = 1; //cin >> T;
	while (T--) {	
		solve();
	}
	return 0;
}


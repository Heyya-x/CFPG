#include <bits/stdc++.h>
#define INF 1e9
#define ll long long
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> nums(n);
	vector<pair<int, int>> ans;
	for (int i = 0; i < n; ++i) 
		cin >> nums[i];
	for (int i = 0; i < n - 1; ++i) {
		int min_pos = i;
		for (int j = min_pos + 1; j < n; ++j)
			if (nums[j] < nums[min_pos])
				min_pos = j;
		if (min_pos > i) {
			int temp = nums[min_pos];
			ans.push_back({i, min_pos});
			for (int j = min_pos; j > i; --j)
				nums[j] = nums[j - 1];
			nums[i] = temp;
		}
	}
	cout << ans.size() << "\n";
	for (auto &lr : ans) {
		cout << lr.first + 1 << ' '<< lr.second + 1 << ' ' << lr.second - lr.first << "\n";
	}
	return;	
}

int main() {
	IOS;
	int INPUT;cin >> INPUT;
	while (INPUT--)
		solve();
	return 0;
}


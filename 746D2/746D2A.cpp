#include <bits/stdc++.h>
#define INF 1e9
#define ll long long
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

void solve() {
	int n, h;
	cin >> n >> h;
	vector<int> nums(n);
	for (int i = 0; i < n; ++i)
		cin >> nums[i];
	sort(nums.rbegin(), nums.rend());
	int max, min;
	if (n == 1) {
		max = min = nums[0];
	} else {
		max = nums[0];
		min = nums[1];
	}
	int cnt = 0;
	if (h > max) {
		cnt += h / (max + min) * 2;
	}
	if (h % (max + min) > max) {
		cnt += 2;
	} else if (h % (max + min) > 0) {
		cnt++;
	}
	cout << cnt << endl;
	return;	
}

int main() {
	IOS;
	int INPUT;cin >> INPUT;
	while (INPUT--)
		solve();
	return 0;
}

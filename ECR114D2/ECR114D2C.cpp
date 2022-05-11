#include <bits/stdc++.h>
#define INF 1e9
#define ll long long
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int main() {
	IOS;
	int n;
	cin >> n;
	vector<ll> nums(n);
	ll sum = 0;
	for (int i = 0; i < n; ++i) {
		cin >> nums[i];
		sum += nums[i];
	}
	sort(nums.begin(), nums.end());
	int m;
	cin >> m;
	while (m--) {
		ll x, y;
		cin >> x >> y;
		int pos = lower_bound(nums.begin(), nums.end(), x) - nums.begin();
		ll ans = 2e18;
		if (pos > 0) ans = min(ans, (x - nums[pos - 1]) + max(0LL, y - sum + nums[pos - 1]));
		if (pos < n) ans = min(ans, max(0LL, y - sum + nums[pos]));
		cout << ans << "\n";
	}
	
	return 0;
}


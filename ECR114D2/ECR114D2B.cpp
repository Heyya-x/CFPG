#include <bits/stdc++.h>
#define INF 1e9
#define ll long long
#define vi vector<int>
#define vii vector<vector<int>>
#define forin(i,a,n) for(int i=a;i<n;++i)
#define forout(i,a,n) for(int i=a;i>n;--i)
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

void solve() {
	vector<int> nums(3);
	int x;
	cin >> nums[0] >> nums[1] >> nums[2] >> x;
	sort(nums.rbegin(), nums.rend());
	if (nums[0] - nums[1] - nums[2] - 1 <= x && nums[0] + nums[1] + nums[2] - 3 >= x) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
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


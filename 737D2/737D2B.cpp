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
	int n, k;
	cin >> n >> k;
	vii nums(n, vi (2));
	forin(i, 0, n) {
		cin >> nums[i][0];
		nums[i][1] = i;
	}
	sort(nums.begin(), nums.end());
	int c = 1;
	forin(i, 1, n) {
		if (nums[i - 1][1] + 1 != nums[i][1])
			++c;
	}
	cout << (c <= k ? "YES" : "NO") << endl;
	return;	
}

int main() {
	IOS;
	int INPUT;cin >> INPUT;
	while (INPUT--)
		solve();
	return 0;
}


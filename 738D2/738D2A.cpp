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
	int n;
	cin >> n;
	vi nums(n);
	forin(i, 0, n)
		cin >> nums[i];
	int ans = nums[0];
	forin(i, 1, n)
		ans &= nums[i];

	cout << ans << endl;
	
	return;	
}

int main() {
	IOS;
	int INPUT;cin >> INPUT;
	while (INPUT--)
		solve();
	return 0;
}


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
	int oddNum = 0;
	forin(i,0,n) {
		cin >> nums[i];
		if (nums[i] & 1)
			++oddNum;
	}
	int evenNum = n - oddNum;
	if (abs(oddNum - evenNum) > 1) {
		cout << "-1" << endl;
		return;
	}
	ll ans1 = 1e18;
	if (oddNum <= evenNum) {
		ans1 = 0;
		int j = 1;
		forin(i,0,n) {
			if (nums[i] & 1) {
				ans1 += abs(i - j);
				j += 2;
			}
		}
	}
	if (evenNum <= oddNum) {
		ll ans2 = 0;
		int j = 0;
		forin(i,0,n) {
			if (nums[i] & 1) {
				ans2 += abs(i - j);
				j += 2;
			}
		}
		ans1 = min(ans1, ans2);
	}
	cout << ans1 << endl;
	return;	
}

int main() {
	IOS;
	int INPUT;cin >> INPUT;
	while (INPUT--)
		solve();
	return 0;
}


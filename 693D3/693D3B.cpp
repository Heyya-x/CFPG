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
	int cnt1 = 0, cnt2 = 0;
	forin(i, 0, n) {
		int temp;
		cin >> temp;
		if (temp == 1) {
			cnt1++;
		} else {
			cnt2++;
		}
	}
	if ((cnt1 + 2 * cnt2) % 2 == 1) {
		cout << "NO" << endl;
	} else {
		int sum = (cnt1 + 2 * cnt2) / 2;
		if (sum % 2 == 0 || sum % 2 == 1 && cnt1 != 0) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
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


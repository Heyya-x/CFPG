#include <bits/stdc++.h>
#define INF 1e9
#define ll long long
#define vi vector<int>;
#define vii vector<vector<int>>;
#define forin(i,a,n) for(int i=a;i<n;++i)
#define forout(i,a,n) for(int i=a;i>n;--i)
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

void solve() {
	int m, n;
	cin >> m >> n;
	if (m == n) {
		if (m == 0) {
			cout << 0 << endl;
			return ;
		} else {
			cout << 1 << endl;
			return ;
		}
	}
	if (abs(m - n) % 2) {
		cout << -1 << endl;
	} else {
		cout << 2 << endl;
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


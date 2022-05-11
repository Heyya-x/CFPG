#include <bits/stdc++.h>
#define INF 1e9
#define ll long long int
#define vi vector<int>
#define vii vector<vector<int>>
#define vll vector<ll>
#define forin(i, a, n) for (int i = a; i < n; ++i)
#define forout(i, n ,b) for (int i = n; i > b; --i)
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void solve() {
	int n;
	cin >> n;
	vii lev(n, vi(2));
	forin(i, 0, n) {
		int k;
		cin >> k;
		lev[i][1] = k;
		vi cave(k);
		forin(j, 0, k) {
			cin >> cave[j];
		}
		int minv = cave[0] + 1;
		forin(j, 1, k) {
			minv = max(minv, cave[j] + 1 - j);
		}
		lev[i][0] = minv;
	}
	sort(lev.begin(), lev.end());
	forin(i, 1, n) {
		lev[i][1] += lev[i - 1][1];
	}
	int ans = lev[0][0];
	forin(i, 1, n) {
		ans = max(ans, lev[i][0] - lev[i - 1][1]);
	}
	cout << ans << endl;
}

int main() {
	IOS;
	int INPUT; cin >> INPUT;
	while (INPUT--)
		solve();
	return 0;
}


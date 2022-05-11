#include <bits/stdc++.h>
#define INF 1e9
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define forin(i,n) for (int i=0; i < n; ++i)
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void solve() {
	int l, r;
	cin >> l >> r;
	if (l <= r / 2 + 1) {
		cout << (r + 1) / 2 - 1 << endl;
	} else {
		cout << r - l << endl;
	}
	return;
}

int main() {
	IOS;
	int INPUT; cin >> INPUT;
	while (INPUT--)
		solve();
	return 0;
}


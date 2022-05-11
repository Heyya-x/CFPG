#include <bits/stdc++.h>
#define INF 1e9
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define forin(i, a, n) for (int i = a; i < n; ++i)
#define forout(i, n ,b) for (int i = n; i > b; --i)
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void solve() {
	int n;
	cin >> n;
	vi a(n);
	forin(i, 0, n) {
		cin >> a[i];
	}
	int mx = a[0];
	ll sum = a[0];
	forin(i, 1, n) {
		mx = max(mx, a[i]);
		sum += a[i];
	}
	cout << 1.0 * (sum - mx) / (n - 1) + mx << endl;
	return;
}

int main() {
	IOS;
	cout << fixed << setprecision(10);
	int INPUT; cin >> INPUT;
	while (INPUT--)
		solve();
	return 0;
}


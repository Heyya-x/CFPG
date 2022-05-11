#include <bits/stdc++.h>
#define INF 1e9
#define ll long long
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int MOD = 1e9 + 7;
void solve() {
	int n;
	cin >> n;
	long long ans = 1;
	for (int i = n * 2; i >= 3; --i) {
		ans = (ans * i) % MOD;
	}
	ans %= MOD;
	cout << ans << "\n";
	return;	
}

int main() {
	IOS;
	int INPUT;cin >> INPUT;
	while (INPUT--)
		solve();
	return 0;
}


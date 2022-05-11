#include <bits/stdc++.h>
#define INF 1e9
#define ll long long
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

void solve() {
	int n;
	cin >> n;
	int k = 1;
	if (n == 1) {
		cout << "1\n";
		return;
	}
	if (n & 1) {
		cout << "2 3 1 ";
		k = 4;
	}
	for (; k <= n; k += 2)
		cout << k + 1 << ' ' << k << ' ';
	cout << '\n';
	return;	
}

int main() {
	IOS;
	int INPUT;cin >> INPUT;
	while (INPUT--)
		solve();
	return 0;
}


#include <bits/stdc++.h>
#define INF 1e9
#define ll long long
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

void solve() {
	int n, x;
	cin >> n >> x;
	vector<int> a(n);
	vector<int> b(n);
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	b = a;
	sort(b.begin(), b.end());
	for (int i = 0; i < n; ++i) {
		if ((i >= x) && (n - i < x))
			if (a[i] != b[i]) {
				cout << "NO" << endl;
				return;
			}
	}
	cout << "YES" << endl;
	return;	
}

int main() {
	IOS;
	int INPUT;cin >> INPUT;
	while (INPUT--)
		solve();
	return 0;
}


/**
  *	 author:  Heyya
  *	 created: 05.10.2022 21:02
**/
#include <bits/stdc++.h>
using namespace std;
using LL = long long;

void solve() {
	int n;
	cin >> n;
	vector<int> a(n), b(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		a[i]--;
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
		b[i]--;
	}
	vector<int> e(n, 0);
	bool ok = true;
	int i = n - 1;
	int j = n - 1;
	while (i >= 0) {
		int v = a[i];
		if (j >= 0 && a[i] == b[j]) {
			while (i >= 0 && a[i] == v) {
				i--;
				e[v]--;
			}
			while (j >= 0 && b[j] == v) {
				j--;
				e[v]++;
			}
			if (e[v] < 0) {
				ok = false;
				break;
			}
		} else {
			if (e[v] == 0) {
				ok = false;
				break;
			}
			e[v] --;
			i--;
		}
	}
	for (int i = 0; i < n; i++) {
		ok &= (e[i] == 0);
	}
	cout << (ok ? "YES" : "NO") << "\n";
	return;
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int T = 1; cin >> T;
	while (T--) {	
		solve();
	}
	return 0;
}


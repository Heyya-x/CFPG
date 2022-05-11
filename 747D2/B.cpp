/**
  *	 author:  Heyya
  *	 created: 10.09.2021 23:08
**/
#include <bits/stdc++.h>

using namespace std;

int INF = 1e9 + 7;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {	
		int n, k;
		cin >> n >> k;
		int ans = 0;
		long long p = 1;
		for (int i = 0; i <= 31; ++i) {
			if (k & (1<<i))
				ans = (ans + p) % INF;
			p *= n;
			p %= INF;
		}
		cout << ans << endl;
	}
	return 0;
}



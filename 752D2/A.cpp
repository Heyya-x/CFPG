/**
  *	 author:  Heyya
  *	 created: 11.05.2021 15:23
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {	
		int n;
		cin >> n;
		int res = 0;
		for (int i = 1; i < n + 1; i++) {
			int temp;
			cin >> temp;
			if (temp - res > i)
				res += temp - res - i;
		}
		cout << res << '\n';
	}
	return 0;
}



/**
  *	 author:  Heyya
  *	 created: 11.12.2021 13:57
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
		int a[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];
		for (int i = 2; i < n; i++) {
			if (a[i - 2] == a[i - 1] && a[i] != a[i - 2]) {
				cout << i + 1 << '\n';
				break;
			} else if (a[i - 2] == a[i] && a[i - 1] != a[i]) {
				cout << i << '\n';
				break;
			} else if (a[i - 1] == a[i] && a[i - 2] != a[i]) {
				cout << i - 1 << '\n';
				break;
			}
		}
	}
	return 0;
}



/**
  *	 author:  Heyya
  *	 created: 11.05.2021 14:08
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {	
		long long x, n;
		cin >> x >> n;
		long long add = 0;
		if (!(x & 1)) {
			if (n % 4 == 0) {
				add = 0;
			} else if (n % 4 == 1) {
				add = -n;
			} else if (n % 4 == 2) {
				add = 1;
			} else {
				add = n + 1;
			}
		} else {
			if(n % 4 == 0) {
				add = 0;
			} else if (n % 4 == 1) {
				add = n;
			} else if (n % 4 == 2) {
				add = -1;
			} else {
				add = -n - 1;
			}
		}
		cout << x + add << '\n';
	}
	return 0;
}

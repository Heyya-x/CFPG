//#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	while (n--) {
		int num;
		int ans = 0;
		cin >> num;
		for (int i = 0; i < num; ++i) {
			ans++;
			while (ans % 3 == 0 || ans % 10 == 3) {
				ans++;
			}
		}
		cout << ans << endl;

	}
	return 0;
}


#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		string s;
		cin >> s;
		int n0 = 0, n1 = 0;
		int n = s.size();
		if (s[0] == '0')
			n0++;
		for (int i = 1; i < n; ++i) {
			if (s[i] == s[i - 1]) {
				continue;
			} else if (s[i] == '0') {
				n0++;
			}
		}
		cout << (n0 >= 2 ? 2 : n0) << '\n';
	}
	return 0;
}



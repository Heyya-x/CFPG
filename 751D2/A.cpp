/**
  *	 author:  Heyya
  *	 created: 10.28.2021 16:54
**/
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
		char a = s[0];
		int p = 0;
		for (int i = 1; i < s.size(); i++) {
			if (s[i] < a) {
				a = s[i];
				p = i;
			}
		}
		cout << a << ' ';
		if (p > 0)
			cout << s.substr(0, p);
		if (p < s.size() - 1)
			cout << s.substr(p + 1, s.size() - p);
		cout << '\n';
	}
	return 0;
}



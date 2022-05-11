/**
  *	 author:  Heyya
  *	 created: 11.12.2021 15:07
**/
#include <bits/stdc++.h>

using namespace std;

void solve() {
	int a, b;
	cin >> a >> b;
	string s;
	cin >> s;
	int n = s.size();
	int end = n / 2;
	bool f = true;
	for (int i = 0; i <= end; i++) {
		if (s[i] == '?' && s[n - i - 1] != '?') {
			s[i] = s[n - i - 1];
			(s[i] == '0' ? a -= 2 : b -= 2);
			if (i == n - i - 1)
				(s[i] == '0' ? a++ : b++);
		} else if (s[i] != '?' && s[n - i - 1] == '?') {
			s[n - i - 1] = s[i];
			(s[i] == '0' ? a -= 2 : b -= 2);
			if (i == n - i - 1)
				(s[i] == '0' ? a++ : b++);
		} else if (s[i] == '?' && s[n - i - 1] == '?') {
			if (a > 0) {
				s[i] = s[n - i - 1] = '0';
				a -= 2;
				if (i == n - i - 1) a++;
			} else if (b > 0) {
				s[i] = s[n - i - 1] = '1';
				b -= 2;
				if (i == n - i - 1) b++;
			}
		} else {
			(s[i] == '0' ? a-- : b--);
			(s[n - i - 1] == '0' ? a-- : b--);
		}
		if (a < 0 || b < 0) break;
	}
	if (a !=  0 || b != 0) {
		f = false;			
	}
	cout << (f ? s : "-1") << '\n';		
	return;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {	
		solve();
	}
	return 0;
}



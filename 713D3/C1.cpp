/**
  *	 author:  Heyya
  *	 created: 11.12.2021 15:31
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {	
		int a, b;
		cin >> a >> b;
		string s;
		cin >> s;
		int n = s.size();
		if (a + b != n) {
			cout << "-1\n";
			break;
		}
		int mid = s.size() / 2;
		bool f = true;
		int res = 0;
		for (int i = 0; i <= mid; i++) {
			if (i == mid && n & 1) break;
			char l = s[i], r = s[n - i - 1];
			if(l == '?' && r == '?') res += 2;
			else if (l != '?' && r == '?') {
				s[n - i - 1] = s[i];
				(l == '0' ? a-- : b--);
			}
			else if (l == '?' && r != '?') {
				s[i] == s[n - i - 1];
				(l == '0' ? a-- : b--);
			}
			else if (l != '?' && r != '?') {
				if (l != r) { f = false; break;}
				(l == '0' ? a -= 2 : b -= 2);
			}
		}
		if (n & 1) {
			if (s[mid] == '?') {
				(a > 0 ? s[mid] == '0', a-- : s[mid] == '1', b--);
			} else {
				(s[mid] == '0' ? a-- : b--);
			}
		}
		for (int i = 0; i <= mid; i++) {
			if (i == mid && n & 1) break;
			if (s[i] == '?' && s[n - i - 1] == '?') {
				if (a > 0) {
					s[i] == s[n - i - 1] == '0';
					a -= 2;
				} else {
					s[i] == s[n - i - 1] == '1';
					b -= 2;
				}
			}
		}
		if (a != 0 || b != 0)
			f = false;
		cout << (f ? s : "-1") << '\n';
	}
	return 0;
}



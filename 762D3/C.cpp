/**
  *	 author:  Heyya
  *	 created: 02.06.2022 14:21
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	string a, b, c; cin >> a >> c;
	reverse(a.begin(), a.end());
	reverse(c.begin(), c.end());
	int l1 = 0, l3 = 0;
	while (l1 < (int)a.length() && l3 < (int)c.length()) {
		int s1 = a[l1++] - '0';
		int s3 = c[l3++] - '0';
		if (s3 < s1) {
			if (l3 < (int)c.length()) s3 += (c[l3++] - '0') * 10;
			else {
				cout << "-1\n";
				return;
			}
		}
		if (s3 < s1) {
			cout << "-1\n";
			return;
		}
		int s2 = s3 - s1;
		if (s2 >= 10) {
			cout << "-1\n";
			return;
		} else {
			b.push_back(s2 + '0');
		}
	}	
	while (l1 == (int)a.length() && (l3 < (int)c.length())) {
		b.push_back(c[l3++]);
	}
	if (l1 == (int)a.length() && l3 == (int)c.length()) {
		reverse(b.begin(), b.end());
		cout << stoll(b) << "\n";
	} else {
		cout << "-1\n";
	}
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



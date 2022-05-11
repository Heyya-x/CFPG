/**
  *	 author:  Heyya
  *	 created: 11.09.2021 22:15
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
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];		
		}
		string s;
		cin >> s;
		bool haveB = false, haveR = false;
		for (char ch : s) {
			if (ch == 'R') {
				haveR = true;		
			} else if (ch == 'B') {
				haveB = true;
			}
		}
		int maxB;
		if (!haveR) {
			maxB = 1;
		} 
	}
	return 0;
}



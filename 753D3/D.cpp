/**
  *	 author:  Heyya
  *	 created: 11.09.2021 22:05
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {	
		int n; cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		string s;
		cin >> s;
		vector<int> l, r;
		for (int i = 0; i < n; i++)
			(s[i] == 'B' ? l : r).push_back(a[i]);
		sort(l.begin(), l.end());
		sort(r.rbegin(), r.rend());
		bool flag = true;
		for (int i = 0; i < l.size(); i++) {
			if (l[i] < i + 1) {
				flag = false;
			}
		}
		for (int i = 0; i < r.size(); i++) {
			if (r[i] > n - i) {
				flag = false;
			}
		}
		cout << (flag ? "YES" : "NO") << '\n';
	}
	return 0;
}



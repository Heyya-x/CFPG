/**
  *	 author:  Heyya
  *	 created: 11.05.2021 14:56
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
		sort(a.begin(), a.end());
		int maxMin = a[0];
		for (int i = 1; i < n; i++) {
			maxMin = max(maxMin, a[i] - a[i - 1]);
		}
		cout << maxMin << '\n';
	}
	return 0;
}



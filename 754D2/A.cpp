/**
  *	 author:  Heyya
  *	 created: 11.12.2021 22:40
**/
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve() {
	int a, b, c;
	cin >> a >> b >> c;
	//if (a < b) swap(a, b);
	//if (a < c) swap(a, c);
	//if (b < c) swap(b, c);
	int ans = min(abs(a+b-2*c)%3, min(abs(a+c-2*b)%3, abs(b+c-2*a)%3));
	cout << ans << '\n';
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



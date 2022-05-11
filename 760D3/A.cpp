/**
  *	 author:  Heyya
  *	 created: 12.17.2021 00:22
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int v[7];
	for (int i = 0; i < 7; i++) cin >> v[i];
	int a = v[0], b = v[1], c = v[6] - a - b;
	printf("%d %d %d\n", a, b, c);
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



/**
  *	 author:  Heyya
  *	 created: 02.06.2022 16:40
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 3e5 + 10;

int p[N];

void solve() {
	int a, b; cin >> a >> b;
	int pre = p[a - 1];
	if (pre == b) {
		cout << a << "\n";
	} else if ((pre ^ b) == a) {
		cout << a + 2 << "\n";
	} else {
		cout << a + 1 << "\n";
	}
	return;
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int T = 1; cin >> T;
	p[0] = 0;
	for (int i = 1; i < N; i++) {
		p[i] = p[i - 1] ^ i;
	}
	while (T--) {	
		solve();
	}
	return 0;
}



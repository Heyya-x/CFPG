/**
  *	 author:  Heyya
  *	 created: 02.06.2022 13:56
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n; cin >> n;
	set<int> st;
	for (int i = 1; i * i <= n; i++) {
		st.insert(i * i);
	}
	for (int i = 1; i * i * i <= n; i++) {
		st.insert(i * i * i);
	}
	cout << st.size() << "\n";
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



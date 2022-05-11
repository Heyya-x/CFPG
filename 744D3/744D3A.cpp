#include <bits/stdc++.h>
#define INF 1e9
#define ll long long
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

void solve() {
	string s;
	cin >> s;
	int a = 0, b = 0, c = 0;
	for (char ch : s) {
		if (ch == 'A') {
			a++;
		} else if (ch == 'C') {
			c++;
		} else {
			b++;
		}
	}
	cout << (a + c == b ? "YES" : "NO") << endl;
	return;	
}

int main() {
	IOS;
	int INPUT;cin >> INPUT;
	while (INPUT--)
		solve();
	return 0;
}


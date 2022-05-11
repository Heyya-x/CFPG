#include <bits/stdc++.h>
#define INF 1e9
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define floop(i, n) for (int i = 0; i < n; ++i)
#define dloop(i, n) for (int i = n; i > 0; --i)
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;


int change(string s) {
	int ans = 0, n = s.size();
	floop (i, n)
		ans = ans * 2 + s[i] - '0';
	return ans;
}

void solve() {
	int n ;
	string s;
	cin >> n >> s;
	cout << change(s) << endl;
	return;
}

int main() {
	IOS;
	int INPUT; cin >> INPUT;
	while (INPUT--)
		solve();
	return 0;
}


#include <bits/stdc++.h>
#define INF 1e9
#define ll long long
#define vi vector<int>
#define vii vector<vector<int>>
#define forin(i,a,n) for(int i=a;i<n;++i)
#define forout(i,a,n) for(int i=a;i>n;--i)
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

void solve() {
	int n, a, b;
	cin >> n;
	a = b = n / 3;
	if (n % 3 == 1) {
		++a;
	} else if (n % 3 == 2) {
		++b;
	}
	cout << a << " " <<  b << endl;
	return;	
}

int main() {
	IOS;
	int INPUT;cin >> INPUT;
	while (INPUT--)
		solve();
	return 0;
}


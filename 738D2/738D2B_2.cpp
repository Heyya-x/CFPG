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
	int n;
	string s;
	cin >> n >> s;
	int cnt = 0;
	forin(i,0,n)
		cnt += (s[i] != '?');
	if (!cnt)
		s[0] = 'R';
	forin(i,1,n)
		if (s[i] == '?' && s[i - 1] != '?')
			s[i] = s[i - 1] ^ 'R' ^ 'B';
	forout(i,n - 2,-1)
		if (s[i] == '?' && s[i + 1] != '?')
			s[i] = s[i + 1] ^ 'R' ^ 'B';
	cout << s << endl;
	return;	
}

int main() {
	IOS;
	int INPUT;cin >> INPUT;
	while (INPUT--)
		solve();
	return 0;
}


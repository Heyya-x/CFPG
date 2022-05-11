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
	string s1, s2;
	cin >> n >> s1 >> s2;
	int len1 = s1.size(), len2 = s2.size(), pos = 0;
	forin(i,0,len1) {
		if (s1[i] == s2[i]) {
			forin(j,i,len1) {
				if (s1[j] != s2[j]) {
					break;
				} else {
					++pos;
				}
			}
			forin(j,
		}
	}

	return;	
}

int main() {
	IOS;
	int INPUT;cin >> INPUT;
	while (INPUT--)
		solve();
	return 0;
}


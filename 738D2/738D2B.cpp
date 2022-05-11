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
	cin >> n;
	string s;
	cin >> s;
	if (n == 1) {
		if (s == "?") {
			cout << "B" <<endl;
		} else {
			cout << s << endl;
		}
		return;
	}
	vector<int> q(n + 1, 0);
	int cnt = 0;
	forin (i,0,n) {
		if (s[i] == '?') {
			cnt++;
		} else if (i != 0 && s[i - 1] == '?') {
			q[i - cnt] = (s[i] == 'R' ? cnt : -cnt);
			cnt = 0;
		}
	}	
	if (s[n - 1] == '?')
		q[n - cnt] = s[n - cnt - 1] == 'B' ? cnt : -cnt;
	string base = "RB";
	forin(i,0,n) {
		if (q[i] > 0) {
			cout << base[q[i] % 2];
			q[i + 1] = q[i] - 1;
		} else if (q[i] < 0) {
			cout << base[(-q[i] + 1) % 2];
			q[i + 1] = q[i] + 1;
		} else {
			cout << s[i];
		}
	}
	cout << endl;
	return;	
}

int main() {
	IOS;
	int INPUT;cin >> INPUT;
	while (INPUT--)
		solve();
	return 0;
}


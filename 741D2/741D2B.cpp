#include <bits/stdc++.h>
#define INF 1e9
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define forin(i,n) for (int i=0; i < n; ++i)
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;


bool isPrime(int num) {
	if (num <= 1) return false;
	if (num == 2 || num == 3) return true;
	for (int i = 2; i <= num / 2; ++i) {
		if (num % i == 0) return false;
	}
	return true;
}

void solve() {
	int n;
	string s;
	cin >> n >> s;	
	for (int i = 0; i < n; ++i) {
		if (!isPrime(s[i] - '0')) {
			cout << 1 << endl;
			cout << s[i] << endl;
			return;
		}
	}
	for (int i = 0; i < n; ++i) {
		for (int j = i + 1; j < n; ++j) {
			if (!isPrime((s[i] - '0') * 10 + s[j] - '0')) {
				cout << 2 << endl;
				cout << s[i] << s[j] << endl;
				return;
			}
		}
	}
	return;
}

int main() {
	IOS;
	int INPUT; cin >> INPUT;
	while (INPUT--)
		solve();
	return 0;
}


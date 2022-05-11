/**
  *	 author:  Heyya
  *	 created: 04.15.2022 08:59
**/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

constexpr int mod = 32768;

int dfs(int x, int cnt) {
	if (x % mod == 0) {
		return cnt;
	}
	if (cnt > 15) {
		return INT_MAX;
	}
	return min(dfs(x + 1, cnt + 1), dfs(x * 2, cnt + 1));
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n ;i++) {
		int x;
		cin >> x;
		cout << dfs(x, 0) << " ";
	}
	return 0;
}


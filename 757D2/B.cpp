/**
  *	 author:  Heyya
  *	 created: 12.02.2021 22:07
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct build {
	int num;
	int times;
};

bool cmp (build a, build b) {
	return a.times > b.times;
}

void solve() {
	int n;
	cin >> n;
	build q[n];
	for (int i = 0; i < n; i++) {
		cin >> q[i].times;
		q[i].num = i;
	}
	sort(q, q + n, cmp);
	long long sum = 0, ans[n], pos = 0;
	for (int i = 0; i < n; i++) {
		if (i & 1) {
			pos = -pos;
		} else {
			pos = -pos + 1;
		}
		sum += 2LL * abs(pos) * q[i].times;
		ans[q[i].num] = pos;
	}
	cout << sum << '\n' << "0";
	for (int i = 0; i < n; i++)
		cout << " " << ans[i];
	cout << '\n';
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



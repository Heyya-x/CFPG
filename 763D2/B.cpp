/**
  *	 author:  Heyya
  *	 created: 01.02.2022 22:13
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct node {
	int l, r, p;
};

void solve() {
	int n; cin >> n;
	vector<node> q(n);
	for (int i = 0; i < n; i++) {
		cin >> q[i].l >> q[i].r;
		q[i].p = i;
	}
	sort(q.begin(), q.end(), [&](node a, node b) {
			if (a.r - a.l == b.r - b.l) return a.l < b.l;
			else return (a.r - a.l < b.r - b.l);
			}
		);
	vector<bool> vis(n, false);
	vector<node> ans(n);
	for (int i = 0; i < n; i++) {
		for (int j = q[i].l - 1; j < q[i].r; j++) {
			if (!vis[j]) {
				vis[j] = true;
				ans[q[i].p] = q[i];
				ans[q[i].p].p = j + 1;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << ans[i].l << ' ' << ans[i].r << ' ' << ans[i].p << '\n';
	}
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



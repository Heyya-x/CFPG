/**
  *	 author:  Heyya
  *	 created: 02.16.2022 23:00
**/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int find(vector<int> &fa, int x) {
	return (fa[x] == x ? x : fa[x] = find(fa, fa[x]));
}

void merge(vector<int> &fa, int x, int y) {
	int fx = find(fa, x);
	int fy = find(fa, y);
	fa[fy] = fx;
}

void solve() {
	int n; cin >> n;
	vector<int> fa(n + 1);
	vector<int> q(n);
	for (int i = 1; i <= n; i++) {
		fa[i] = i;
	}
	for (int i = 0; i < n; i++) {
		cin >> q[i];
	}
	int mxPre = q[0];
	fa[mxPre] = mxPre;
	for (int i = 1; i < n; i++) {
		if (q[i] > mxPre) {
			if (i + 1 <= mxPre) {
				merge(fa, q[i], mxPre);
			}
			mxPre = q[i];
		} else {
			merge(fa, mxPre, q[i]);
		}
	}
	set<int> st;
	for (int i = 0; i < n; i++) {
		int f = find(fa, q[i]);
		//cout << f << " ";
		st.insert(f);
	}
	cout << st.size() << "\n";
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



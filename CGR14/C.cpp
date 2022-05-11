/**
  *	 author:  Heyya
  *	 created: 04.30.2022 11:50
**/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct block {
	int h, idx, ans;
};

struct tower {
	int idx, h;
};

void solve() {
	int n, m, x;
	cin >> n >> m >> x;
	vector<block> q(n);
	auto comp = [](tower a, tower b) {
			return a.h > b.h;
	};
	priority_queue<tower, vector<tower>, decltype(comp)> pq(comp);
	for (int i = 1; i <= m; i++) {
		pq.push({i, 0});
	}
	for (int i = 0; i < n; i++) {
		cin >> q[i].h;
		q[i].idx = i;
	}
	sort(q.begin(), q.end(), [&](block a, block b) {
			return a.h > b.h;
			});
	for (int i = 0; i < n; i++) {
		auto p = pq.top(); pq.pop();
		q[i].ans = p.idx;	
		pq.push({p.idx, p.h + q[i].h});
	}
	sort(q.begin(), q.end(), [&](block a, block b) {
				return a.idx < b.idx;	
			});
	cout << "YES\n";
	for (auto x : q) {
		cout << x.ans << " ";
	}
	cout << "\n";
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


#include <bits/stdc++.h>
using namespace std;
int n, k;
vector<int> q;

int bSearch(int x) {
	int l = 0, r = n - 1;
	int pos = n;
	while (l <= r) {
		int mid = l + (r - l) / 2;
		if (q[mid] <= x) {
			l = mid + 1;
		} else {
			r = mid - 1;
			pos = mid;
		}
	}
	return pos + 1;
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	cin >> n >> k;
	q.resize(n);
	for (int i = 0; i < n; i++) cin >> q[i];

	for (int i = 0; i < k; i++) {
		int x; cin >> x;
		cout << bSearch(x) << '\n';
	}
	return 0;
}

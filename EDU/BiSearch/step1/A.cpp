#include <bits/stdc++.h>
using namespace std;
int n, k;
vector<int> q;

bool bSearch(int x) {
	int l = 0, r = n - 1;
	while (l <= r) {
		int mid = l + (r - l) / 2;
		if (q[mid] == x) return true;
		else if (q[mid] < x) l = mid + 1;
		else r = mid - 1;
	}
	return false;
}

int main() {
	cin >> n >> k;
	q.resize(n);
	for (int i = 0; i < n; i++) cin >> q[i];

	for (int i = 0; i < k; i++) {
		int x; cin >> x;
		cout << (bSearch(x) ? "YES" : "NO") << '\n';
	}
	return 0;
}

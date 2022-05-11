#include <bits/stdc++.h>
using namespace std;
int n, k;
vector<int> q;

int lower_Search(int x) {
	int l = 0, r = n - 1;
	int pos = n;
	while (l <= r) {
		int mid = l + (r - l) / 2;
		if (q[mid] >= x) {
			r = mid - 1;
			pos = mid;
		} else {
			l = mid + 1;
		}
	}
	return pos;
}

int upper_Search(int x) {
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
	return pos;
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	cin >> n;
	q.resize(n);
	for (int i = 0; i < n; i++) cin >> q[i];
	sort(q.begin(), q.end());

	cin >> k;
	for (int i = 0; i < k; i++) {
		int x, y; cin >> x >> y;
		//cout << upper_Search(y) - lower_Search(x) << ' ' ;
		cout << upper_bound(q.begin(), q.end(), y) - lower_bound(q.begin(), q.end(), x) << ' ';
	}
	return 0;
}

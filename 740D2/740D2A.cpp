#include <bits/stdc++.h>
#define INF 1e9
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void solve() {
	int n, iter = 0;
	cin >> n;
	vi nums(n);
	for (int i = 0; i < n; ++i) {
		cin >> nums[i];
	}
	while (!is_sorted(nums.begin(), nums.end())) {
		for (int i = iter % 2; i < n - 1; i += 2) {
			if (nums[i] > nums[i + 1])
				swap(nums[i], nums[i + 1]);
		}
		++iter;
	}
	cout << iter << endl;
	return;
}

int main() {
	IOS;
	int INPUT; cin >> INPUT;
	while (INPUT--)
		solve();
	return 0;
}

#include <bits/stdc++.h>
#define INF 1e9
#define ll long long
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

void solve() {
	int n;
	cin >> n;	
	deque<int> list;
	for (int i = 0; i < n; ++i) {
		int num;
		cin >> num;
		if (list.empty()) {
			list.push_front(num);
			continue;
		}
		if (num <= list.front()) {
			list.push_front(num);
		} else {
			list.push_back(num);
		}
	}
	for (int i = 0; i < n; ++i) {
		cout << list.front() << ' ';
		list.pop_front();
	}
	cout << "\n";
	return;	
}

int main() {
	IOS;
	int INPUT;cin >> INPUT;
	while (INPUT--)
		solve();
	return 0;
}


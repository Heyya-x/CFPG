#include <bits/stdc++.h>
using namespace std;

void count_sort(vector<int> &p, vector<int> &c) {
	int n = p.size();
	vector<int> cnt(n, 0);
	for (int i = 0; i < n; i++) {
		cnt[p[i]]++;
	}
	vector<int> pos(n);
	pos[0] = 0;
	for (int i = 1; i < n; i++) {
		pos[i] = pos[i - 1] + cnt[i - 1];
	}
	vector<int> p_new(n);
	for (auto x : p) {
		int i = c[x];
		p_new[pos[i]] = x;

	}
}

int main() {
	string s;
	cin >> s;
	s += '$';
	int n = s.size();
	vector<int> p(n), c(n);
	{
		vector<pair<char, int>> a(n);
		for (int i = 0; i < n; i++) a[i] = {s[i], i};
		sort(a.begin(), a.end());

		for (int i = 0; i < n; i++) p[i] = a[i].second;

		c[p[0]] = 0;
		for (int i = 1; i < n; i++) {
			if (a[i].first == a[i - 1].first) {
				c[p[i]] = c[p[i - 1]];
			} else {
				c[p[i]] = c[p[i - 1]] + 1;
			}
		}
	}

	int k = 0;
	while ((1 << k) < n) {
		for (int i = 0; i < n; i++) {
			p[i] = p[(i - (1 << k) + n) % n];
		}
		count_sort(p, c);

		c[p[0]] = 0;
		for (int i = 1; i < n; i++) {

		}
		k++;
	}
	for (int i = 0; i < n; i++) {
		cout << p[i] << ' ';
	}
}

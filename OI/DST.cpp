#include <bits/stdc++.h>
using namespace std;

long long a[5001][5001];
int n, m;

void add(int x, int y, int k) {
	for (; x <= n; x += x & -x)
		for (int j = y; j <= m; j += j & -j)
			a[x][j] += k;
}

long long ask(int x, int y) {
	long long res = 0;
	for (; x; x -= x & -x)
		for (int j = y; j; j -= j & -j)
			res += a[x][j];
	return res;
}

int main() {
	int op, x, y, a, b;
	cin >> n >> m;
	while (scanf("%d %d %d %d", &op, &x, &y, &a) != EOF) {
		if (op == 1) {
			add(x, y, a);
		} else {
			scanf("%d", &b);
			cout << (ask(a, b) + ask(x - 1, y - 1) - ask(x - 1, b) - ask(a, y - 1)) << '\n';
		}
	}
	return 0;
}

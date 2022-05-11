#include <bits/stdc++.h>
using namespace std;
int q[4];
char option[3], opd[] = {'+', '-', '*', '/'};

void check() {
	double ans = q[0];
	for (int i = 0; i < 3; i++) {
		char ch = option[i];
		if (ch == '+') {
			ans += 1.0 * q[i + 1];
		} else if (ch == '-') {
			ans -= 1.0 * q[i + 1];
		} else if (ch == '*') {
			ans *= 1.0 * q[i + 1];
		} else {
			ans /= 1.0 * q[i + 1];
		}
	}
	//printf("((%d%c%d)%c%d)%c%d)\n", q[0], option[0], q[1], option[1], q[2], option[2], q[3]);
	if (ans == 24) {
		printf("((%d%c%d)%c%d)%c%d\n", q[0], option[0], q[1], option[1], q[2], option[2], q[3]);
		exit(0);
	}
}

void dfs(int x) {
	if (x == 4) {
		check();
		return;
	}
	for (int i = 0; i < 4; i++) {
		option[x] = opd[i];
		dfs(x + 1);
	}
}

int main() {
	cin >> q[0] >> q[1] >> q[2] >> q[3];
	sort(q, q + 4);
	while (next_permutation(q, q + 4)) {
		//printf("%d %d %d %d\n", q[0], q[1], q[2], q[3]);
		dfs(0);
	}
	cout << -1;
}

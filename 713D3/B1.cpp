/**
  *	 author:  Heyya
  *	 created: 11.12.2021 14:53
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {	
		int n;
		cin >> n;
		char a[n][n];
		int p[2][2], cnt = 0;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++) {
				cin >> a[i][j];
				if (a[i][j] == '*') {
					p[cnt][0] = i;
					p[cnt++][1] = j;
				}
			}
		if (p[0][0] == p[1][0]) {
			int row = p[0][0];
			if (row == 0) {
				a[row + 1][p[0][1]] = '*';
				a[row + 1][p[1][1]] = '*';
			} else {
				a[row - 1][p[0][1]] = '*';
				a[row - 1][p[1][1]] = '*';
			}
		} else if (p[0][1] == p[1][1]) {
			int col = p[0][1];
			if (col == 0) {
				a[p[0][0]][col + 1] = '*';
				a[p[1][0]][col + 1] = '*';
			} else {
				a[p[0][0]][col - 1] = '*';
				a[p[1][0]][col - 1] = '*';
			}
		} else {
			a[p[0][0]][p[1][1]] = '*';
			a[p[1][0]][p[0][1]] = '*';
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++)
				cout << a[i][j];
			cout << '\n';
		}
	}	
	return 0;
}



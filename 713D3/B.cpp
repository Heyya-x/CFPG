/**
  *	 author:  Heyya
  *	 created: 11.12.2021 14:15
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {	
		int n; cin >> n;
		char a[n][n];
		int p[2][2];
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cin >> a[i][j];
				if (a[i][j] == '*') {
					p[cnt][0] = i;
					p[cnt++][1] = j;
				}
			}
		}
		bool f = true;
		if (p[0][0] == p[1][0]) {
			f = false;
			int row = p[0][0];
			int h = abs(p[0][1] - p[1][1]);
			if (p[0][0] - h >= 0) {
				a[row - h][p[0][1]] = '*';
				a[row - h][p[1][1]] = '*';
				for (int i = 0; i < n; i++) {
					for (int j = 0; j < n; j++) 
						cout << a[i][j];
					cout << '\n';
				}
				a[row - h][p[0][1]] = '.';
				a[row - h][p[1][1]] = '.';
			}
			if (p[0][0] + h < n) {
				h = -h;
				a[row - h][p[0][1]] = '*';
				a[row - h][p[1][1]] = '*';
				for (int i = 0; i < n; i++) {
					for (int j = 0; j < n; j++)
						cout << a[i][j];
					cout << '\n';
				}
			}
		} else if (p[0][1] == p[1][1]) {
			f = false;
			int col = p[0][1];
			int w = abs(p[0][0] - p[1][0]);
			if (p[0][1] - w >= 0) {
				a[p[0][0]][col - w] = '*';
				a[p[1][0]][col - w] = '*';
				for (int i = 0; i < n; i++) {
					for (int j = 0; j < n; j++)
						cout << a[i][j];
					cout << '\n';
				}
				a[p[0][0]][col - w] = '.';
				a[p[1][0]][col - w] = '.';
			}
			if (p[0][1] + w < n) {
				w = -w;
				a[p[0][0]][col - w] = '*';
				a[p[1][0]][col - w] = '*';
				for (int i = 0; i < n; i++) {
					for (int j = 0; j < n; j++)
						cout << a[i][j];
					cout << '\n';
				}
			}
		} else {
			a[p[0][0]][p[1][1]] = '*';
			a[p[1][0]][p[0][1]] = '*';
		}
		if (f)
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cout << a[i][j];
			}
			cout << '\n';
		}
	}
	return 0;
}



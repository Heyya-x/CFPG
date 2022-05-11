//#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	while (n--) {
		int a, b, c, d;
		cin >> a;
		cin >> b;
		cin >> c;
		d = abs(a - b);
		if ( 2 * d < c || min(a, b) > max(a, b) / 2) {
			cout << -1 << endl;
			continue;
		}
		b = c > d ? c - d : c + d;
		cout << b << endl;
	}
	return 0;
}

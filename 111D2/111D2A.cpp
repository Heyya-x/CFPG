//#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	while (n--) {
		int s;
		scanf("%d", &s);
		int p = 1;
		while (p * p < s) {
			++p;
		}
		printf("%d\n", p);
	}
	return 0;
}

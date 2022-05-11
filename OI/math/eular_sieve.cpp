#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e7 + 10;

ll prime[maxn], fac[maxn];
bool vis[maxn];
int cnt = 0;

void eular_sieve(int n) {
	fac[1] = 1;
	for (int i = 2; i <= n; i++) {
		if (!vis[i]) {
			prime[++cnt] = i;
		}
		for (int j = 1; j <= cnt && i * prime[j] <= n; j++) {
			vis[i * prime[j]] = 1;
			if (i % prime[j] == 0) break;
		}
	}
}


int main() {
	int n;
	cin >> n;
	eular_sieve(n);
	for (int i = 1; i <= cnt; i++)
		cout << prime[i] << ' ';
	return 0;
}

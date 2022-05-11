#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        int m;
        cin >> m;
        vector<int> dpA(m), dpB(m);
        for (int i = 0; i < m; ++i) {
            scanf("%d", &dpA[i]);
        }
        for (int i = 0; i < m; ++i) {
            scanf("%d", &dpB[i]);
        }
        int sum1 = 0, sum2 = 0;
        for (int i = 0; i < m; ++i) {
            sum1 += dpA[i];
        }
        sum1 -= dpA[0];
        int ans = max(sum1, sum2);
        sum2 += dpB[0];
        for (int i = 1; i < m; ++i) {
            sum1 -= dpA[i];
            ans = min(ans, max(sum1, sum2));
            sum2 += dpB[i];
        }
        printf("%d\n", ans);
    }
    return 0;
}

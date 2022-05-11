#include <bits/stdc++.h>
using namespace std;
int main() {
    int q[] = {1, 3, 5, 7, 9, 2, 4, 6, 8 ,10};
    sort(q, q + sizeof(q) / sizeof(q[0]), [&](int A, int B) { return A < B; });
    for (int i = 0; i < 10; i++)
        cout << q[i] << ' ';
    return 0;
}

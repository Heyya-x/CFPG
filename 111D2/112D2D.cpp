#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    
    vector<vector<int>> per(6, vector<int> (n + 1));
    string base = "abc";
    int curr = 0;
    do {
        for (int i = 0; i < n; ++i) {
            per[curr][i + 1] = per[curr][i] + (s[i] != base[i % 3]);
        }
        ++curr;
    } while(next_permutation(base.begin(), base.end()));
    
    while (m--) {
        int l, r;
        cin >> l >> r;
        int ans = n;
        for (int i = 0; i < 6; ++i) {
            ans = min(ans, per[i][r] - per[i][l - 1]);
        }
        cout << ans << endl;
    }
    
    return 0;
}



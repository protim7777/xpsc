#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    do {
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> b(m);
        for (auto& x : b) cin >> x;

        vector<int> c(k);
        for (auto& x : c) cin >> x;

        if (k == n) {
            for (int i = 0; i < m; i++) cout << '1';
            cout << "\n";
        } else if (k == n - 1) {
            int x = 1;
            for (auto y : c) {
                if (y == x) x++;
                else break;
            }
            if (x > n) x = n;

            string res;
            res.reserve(m);
            for (auto y : b) {
                res += (y == x) ? '1' : '0';
            }
            cout << res << "\n";
        } else {
            for (int i = 0; i < m; i++) cout << '0';
            cout << "\n";
        }

        t--;
    } while (t > 0);

    return 0;
}

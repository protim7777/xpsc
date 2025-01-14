#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        auto valid = [&](int m) {
            return (m - (m / n)) >= k;
        };
        int l = 1, h = 2e9, res = -1;
        for (int m; l <= h;) {
            m = l + (h - l) / 2;
            if (valid(m)) {
                res = m;
                h = m - 1;
            } else {
                l = m + 1;
            }
        }

        cout << res << '\n';
    }
    return 0;
}

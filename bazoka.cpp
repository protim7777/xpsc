#include <bits/stdc++.h>
using namespace std;
const int M = 1e5 + 50;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    int a[M];
    do {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        int p = 0;
        for (int i = 1; i < n; i++) {
            if (a[i] > a[i + 1]) {
                p = i;
                break;
            }
        }

        if (!p) {
            cout << "Yes\n";
        } else {
            int f = 0;
            for (int i = p + 1; i <= n; i++) {
                int j = (i % n) + 1;
                if (a[i] > a[j]) {
                    f = 1;
                }
            }

            if (!f) {
                cout << "Yes\n";
            } else {
                cout << "No\n";
            }
        }

        t--;
    } while (t > 0);

    return 0;
}
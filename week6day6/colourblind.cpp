#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<char> a(n), b(n);
        vector<bool> x(n, false), y(n, false);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == 'G' || a[i] == 'B') x[i] = true;
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
            if (b[i] == 'G' || b[i] == 'B') y[i] = true;
        }
        bool match = true;
        for (int i = 0; i < n; i++) {
            if (x[i] != y[i]) {
                match = false;
                break;
            }
        }
        cout << (match ? "YES" : "NO") << endl;
    }
    return 0;
}

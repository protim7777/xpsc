#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int k = 0; k < t; k++) {
        int n, one = 0;
        cin >> n;
        string a, b;
        cin >> a >> b;
        for (int i = 0; i < n; i++) {
            if (a[i] == '1' || b[i] == '1') {
                one++;
            }
        }
        if (one % 2 == 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}

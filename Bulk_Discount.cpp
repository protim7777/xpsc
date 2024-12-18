#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() 
{
    int t;
    cin >> t;
    for (int tno = 0; tno < t; tno++) {
        ll n;
        cin >> n;
        ll cost = 0;
        vector<ll> a;
        for (ll i = 0; i < n; i++) {
            ll b;
            cin >> b;
            a.push_back(b);
        }
        sort(a.begin(), a.end());
        ll idx = 0;
        for (auto val : a) {
            if (val - idx >= 0) {
                cost += val - idx;
            } else {
            }
            idx++;
        }
        cout << cost << endl;
    }
    return 0;
}
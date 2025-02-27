#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        ll n, res = 0;
        cin >> n;
        map<tuple<ll, ll, ll>, ll> freq;
        vector<ll> arr(n);
        for (auto &x : arr) cin >> x;
        ll i = 0;
        while (i + 2 < n) {
            tuple<ll, ll, ll> t1 = {arr[i], arr[i + 1], -1};
            tuple<ll, ll, ll> t2 = {arr[i], -1, arr[i + 2]};
            tuple<ll, ll, ll> t3 = {-1, arr[i + 1], arr[i + 2]};
            tuple<ll, ll, ll> t4 = {arr[i], arr[i + 1], arr[i + 2]};
            res += (freq[t1] + freq[t2] + freq[t3] - 3 * freq[t4]);
            freq[t1]++;
            freq[t2]++;
            freq[t3]++;
            freq[t4]++;
            i++;
        }
        cout << res << endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, t;
    cin >> n >> t;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    auto check = [&](long long sec) {
        long long cnt = 0;
        for (int i = 0; i < n; i++) {
            cnt += sec / arr[i];
            if (cnt >= t) return true;
        }
        return false;
    };
    long long lo = 1, hi = 1e18, res = -1;
    for (long long mid; lo <= hi;) {
        mid = lo + (hi - lo) / 2;
        if (check(mid)) {
            res = mid;
            hi = mid - 1;
        } else {
            lo = mid + 1;
        }
    }
    cout << res << '\n';
    return 0;
}

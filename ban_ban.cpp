#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s = "#";
        for (int i = 0; i < n; i++) {
            s += "BAN";
        }
        vector<pair<int, int>> ans;
        int l = 2, r = s.size() - 1;

        for (; l < r; l += 3, r -= 3) {
            ans.emplace_back(l, r);
            swap(s[l], s[r]);
        }
        cout << ans.size() << endl;
        for (const auto &p : ans) {
            cout << p.first << " " << p.second << endl;
        }
    }
    return 0;
}

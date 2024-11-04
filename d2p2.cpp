#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    multiset<int> m1;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        m1.insert(x);
    }
    int ans = 0, problem = 1;
    while (!m1.empty()) {
        auto lb = m1.lower_bound(problem);
        if (lb != m1.end()) {
            ans++;
            m1.erase(lb);
        } else {
            break;
        }
        problem++;
    }
    cout << ans << endl;
    return 0;
}

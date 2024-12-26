#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int> getCycles(const vector<int>& arr) {
    int n = arr.size();
    vector<bool> vis(n, false);
    vector<int> cycles;
    int i = 0;
    do {
        if (!vis[i]) {
            int len = 0, cur = i;
            do {
                if (!vis[cur]) {
                    vis[cur] = true;
                    cur = arr[cur] - 1;
                    ++len;
                } else {
                    break;
                }
            } while (true);
            cycles.push_back(len);
        }
        ++i;
    } while (i < n);
    return cycles;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    do {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        vector<int> cycles = getCycles(arr);
        priority_queue<int, vector<int>, greater<int>> pq(cycles.begin(), cycles.end());
        ll cost = 0;
        do {
            if (pq.size() > 1) {
                int a = pq.top(); pq.pop();
                int b = pq.top(); pq.pop();
                int merged = a + b;
                cost += merged;
                pq.push(merged);
            } else {
                break;
            }
        } while (true);
        cout << cost << '\n';
    } while (--t > 0);
    return 0;
}
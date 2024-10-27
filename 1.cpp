#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    deque<int> dq(n);
    for (int i = 0; i < n; i++) {
        cin >> dq[i];}
    int s = 0, d = 0, who = 1;
    while (!dq.empty()) {
        int left = dq.front();
        int right = dq.back();
        int mx = max(left, right);
        if (who % 2 != 0) {
            s += mx;}
            else {
            d += mx;
        }
        if (mx == left) {
            dq.pop_front();
        } else {
            dq.pop_back();
        }
        who++;
    }
    cout << s << " " << d << '\n';
    return 0;
}

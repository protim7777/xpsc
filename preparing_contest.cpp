#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    do {
        int a, b;
        cin >> a >> b;
        vector<int> res;
        int x = a - b;
        do {
            if (x >= 1) res.push_back(x);
            x--;
        } while (x >= 1);
        x = a - b + 1;
        do {
            if (x <= a) res.push_back(x);
            x++;
        } while (x <= a);
        for (int v : res) cout << v << " ";
        cout << endl;
        t--;
    } while (t > 0);
    return 0;
}

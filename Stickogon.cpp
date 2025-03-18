#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int tc=0;tc<t;tc++){
        int n;
        cin>>n;
        vector<int> v(n);
        map<int, int> m;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            m[v[i]]++;
        }
        int res = 0;
        for (auto &p : m) {
            res += p.second / 3;
        }
        cout << res << endl;
    }
    return 0;
}

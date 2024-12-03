#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long int a[n];
        for (int i=0; i < n; i++)
        {
            cin >> a[i];
        }
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != 0)
            {
                if (mp.find(a[i]) == mp.end())
                {
                    mp[a[i]] = 1;
                }
                else
                {
                    mp[a[i]]++;
                }
            }
        }
        if (mp.size() == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            if (mp.size() == 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int m;
        cin>>m;
        vector<int>a(m);
        for(int i=0;i<m;i++)
        {
            cin>>a[i];
        }
        reverse(a.begin(),a.end());
        set<int>newset;
        int l=0;
        while(l<m)
        {
            if(newset.find(a[l])==newset.end())
            {
                newset.insert(a[l]);
                l++;
            }
            else
            {
                break;
            }
        }

       int ans= m-newset.size();

       cout<<ans<<endl;

    }
}
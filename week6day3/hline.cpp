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
        vector<char>s(n);
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        long long total=0;
        vector<long long>v;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='L')
            {
                v.push_back((n-1-i)-i);
                total+=i;
            }
            else
            {
                v.push_back(i-(n-1-i));
                total+=n-1-i;
            }
        }
        sort(v.rbegin(),v.rend());
        for(int i=0;i<n;i++)
        {
            if(v[i]>0)
            {
                total+=v[i];
            }
            cout<<total<<' ';
        }
        cout<<endl;
    }
    return 0;
}

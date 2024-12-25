#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() 
{
    int t;
    cin>>t;
    for(int k=0;k<t;k++) 
    {
        ll n,mx=0,s=0;
        cin>>n;
        vector<ll>idx;
        for(ll i=1;i<=n;i++) 
        {
            ll x;
            cin>>x;
            if(x>mx){
                idx.resize(x+1,0);
                mx=x;
            }
            idx[x]=i;
        }
        for(ll i=1;i<=mx; i++) 
            s+=idx[i];
        cout<<s<< endl;
    }
    return 0;
}
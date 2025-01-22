#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    do{
        ll n,x;
        cin>>n>>x;
        vector<ll>a(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.rbegin(),a.rend());
        ll res=a[0];
        for(ll i=1;i<n;i++){
            res=max(res,a[i]+i*x);
        }
        cout<<res<<endl;
        t--;
    }while(t>0);
    return 0;
}

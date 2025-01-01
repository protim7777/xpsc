#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    do{
        ll n;
        cin>>n;
        ll s=0,a=0;
        for(ll i=0;i<n;i++){
            ll x;
            cin>>x;
            s+=x;
            a+=abs(s);
        }
        cout<<a<<endl;
        t--;
    }while(t>0);
    return 0;
}

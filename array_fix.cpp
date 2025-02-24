#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
void solve(){
    ll n;
    cin>>n;
    vll a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    ll curr=0;
    for(ll i=0;i<n;i++){
        if(a[i]<curr){
            cout<<"NO"<<endl;
            return;
        }
        ll t=a[i]/10;
        ll u=a[i]%10;
        if(t>=curr){
            curr=(u>=t)?u:a[i];
        }else{
            curr=a[i];
        }
    }
    cout<<"YES"<<endl;
}
int main()
{
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

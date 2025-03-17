#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    int n,x,y;
    cin>>n>>x>>y;
    ll a=n*x,b=(n/2)*y+(n%2)*x;
    cout<<min(a,b)<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        solve();
    }
    return 0;
}

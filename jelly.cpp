#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        ll a,b,c;
        cin>>a>>b>>c;
        vector<ll>v(c);
        for(ll j=0;j<c;j++){
            cin>>v[j];
        }
        ll total=b;
        for(ll j=0;j<c;j++){
            if(v[j]+1<=a){
                total+=v[j];
            }else{
                if(v[j]+1>a){
                    total+=(a-1);
                }
            }
        }
        cout<<total<<endl;
    }
    return 0;
}

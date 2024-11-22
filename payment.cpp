#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t;
    cin>>t;
    for (int i=0;i<t;i++){
        int a,b,n,s;
        cin>>a>>b>>n>>s;
        int num=min(a,s/n)*n;
        int q=s-num;
        if(q<=b){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}

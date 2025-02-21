#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int p=1,s=1;
        do{
            int g=(n+p)/(2*p);
            if(k<=g){
                cout<<s+(k-1)*(2*p)<<"\n";
                break;
            }
            k-=g;
            p*=2;
            s=p;
        }while(true);
    }
    return 0;
}

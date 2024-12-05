#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    do{
        int n;
        cin>>n;
        string x,y,z;
        cin >>x>>y>>z;
        map<int, pair<char, char>> m;
        bool flag=false;
        for(int i=0;i<n;i++){
            m[i]={x[i],y[i]};
        }
        int i=0;
        do{
            if (m[i].first!=z[i]&&m[i].second!=z[i]){
                flag=true;
                break;
            }
            i++;
        }while(i<n);
        cout<<(flag ?"YES\n":"NO\n");
    }while(--t);
    return 0;
}

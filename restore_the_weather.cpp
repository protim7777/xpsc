#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    do{
        int n,k;
        cin>>n>>k;
        vector<int>x(n),y(n);
        vector<pair<int,int>>p(n);
        for(int i=0;i<n;i++){
            cin>>x[i];
            p[i]={x[i], i};
        }
        for(int i=0;i<n;i++){
            cin>>y[i];
        }
        sort(p.begin(),p.end());
        sort(y.begin(),y.end());
        vector<int> r(n);
        for(int i=0;i<n;i++){
            r[p[i].second]=y[i];
        }
        for(int i=0;i<n;i++){
            cout<<r[i]<<" ";
        }
        cout<<"\n";
    }while(--t>0);
    return 0;
}

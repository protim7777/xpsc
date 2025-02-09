#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    do{
        int n,m;
        cin>>n>>m;
        vector<long long>a(n),b(m);
        for(int i=0;i<n;i++)cin>>a[i];
        for(int j=0;j<m;j++)cin>>b[j];
        sort(b.begin(), b.end());
        const long long inf=1LL<<60;
        long long c=-inf;
        bool ok=true;
        for(int i=0;i<n;i++){
            long long x=inf,y=inf;
            if (a[i]>=c)x=a[i];
            long long tgt=c+a[i];
            auto it=lower_bound(b.begin(), b.end(), tgt);
            if(it!=b.end()) y=(*it) - a[i];
            if (min(x, y)==inf){
                ok=false;
                break;
            }else{
                c=min(x,y);
            }
        }
        cout<<(ok?"YES\n":"NO\n");
    }while(--t);
    return 0;
}

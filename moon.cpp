#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t;
    cin>>t;
    while(t--){
        long long int n,m,h;
        cin>>n>>m>>h;
        vector<long long int>a(n),b(m);
        long long int idx=0,sum=0;
        while(idx < n) cin >>a[idx++];
        idx=0;
        while(idx<m)cin>>b[idx++];
        sort(a.rbegin(), a.rend());
        sort(b.rbegin(), b.rend());
        idx=0;
        while(idx<min(n,m)){
            sum+=min(a[idx],b[idx]*h);
            idx++;
        }
        cout<<sum<<endl;
    }
    return 0;
}

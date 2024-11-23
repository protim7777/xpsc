#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,XOR=0;
        cin>>n;
        vector<int>a(n);
        int i=0;
        while(i<n){
            cin>>a[i];
            XOR^=a[i];
            i++;
        }
        int ans=XOR;
        i=0;
        while(i<n){
            int currXOR=(XOR^a[i]);
            ans=min(ans,currXOR);
            i++;
        }
        cout<<ans<<'\n';
    }
    return 0;
}

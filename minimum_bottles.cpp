#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,x;
        cin>>n>>x;
        int total=0;
        for(int j=0;j<n;j++){
            int w;
            cin>>w;
            total+=w;
        }
        int minB=(total+x-1)/x;
        cout<<minB<<'\n';
    }
    return 0;
}

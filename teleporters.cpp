#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long c;
        cin>>c;
        vector<long long>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            v[i]+=(i+1);
        }
        sort(v.begin(),v.end());
        int cnt=0;
        long long sum=0;
        for(int i=0;i<n;i++){
            if(sum+v[i]>c){
                break;
            }else{
                sum+=v[i];
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}

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
        vector<int> v(n);
        for(int &x:v)cin>>x;
        bool sorted=true;
        for(int i=1;i<n;i++){
            if(v[i]<v[i-1]){
                sorted=false;
                break;
            }
        }
        if(sorted){
            cout<<"0\n";
        }else{
            int cnt=0;
            for(int i=0;i<n;i++){
                if(v[i]==cnt+1){
                    cnt++;
                }
            }
            int rem=n-cnt;
            if(rem==0){
                cout<<"0\n";
            }else{
                if(rem<=k){
                    cout<<"1\n";
                }else{
                    cout<<(rem+k-1)/k<<"\n";
                }
            }
        }
    }while(--t>0);
    return 0;
}

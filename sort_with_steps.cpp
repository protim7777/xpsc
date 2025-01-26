#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    do{
        int n,k;
        cin>>n>>k;
        vector<long long>arr(n);
        for(int i=0;i<n;++i){
            cin>>arr[i];
        }int mis=0;
        for(int i=0;i<n;++i){
            if(abs(arr[i]-(i+1))%k!=0){
                ++mis;
            }
        }if(mis==0){
            cout<<0<<'\n';
        }else if(mis<=2){
            cout<<1<<'\n';
        }else{
            cout<<-1<<'\n';
        }
        --t;
    }while(t>0);
    return 0;
}

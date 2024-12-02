#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    do{
        int n,k;
        cin>>n>>k;
        vector<char>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        map<char,int>mp;
        for(int i=0;i<n;i++){
            mp[v[i]]++;
        }
        int cnt=0;
        for(auto val:mp){
            int c=val.second;
            if(c%2!=0){
                cnt++;
            }
        }
        if(cnt>0){
            cnt=cnt-1;
        }else{
            cnt=0;
        }
        if(cnt<=k){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        t--;
    }while(t>0);
    return 0;
}

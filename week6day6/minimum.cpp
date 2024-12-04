#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int z=0;z<t;++z){
        int n,m;
        cin>>n>>m;
        vector<int>arr(n);
        for(int i=0;i<n;++i){
            cin>>arr[i];
        }
        for(int i=0;i<n;++i){
            int x;
            cin>>x;
            arr[i]*=x;
        }
        sort(arr.begin(),arr.end(),greater<int>());
        int c=0,r=m;
        for(int i=0;i<n;++i){
            if(r>0){
                r-=arr[i];
                c++;
            }else{
                break;
            }
        }
        if(r>0){
            cout<<-1<<endl;
        }else{
            cout<<c<<endl;
        }
    }
    return 0;
}

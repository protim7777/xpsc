#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int tc;
    cin>>tc;
    do{
        for(int t=0;t<tc;t++){
            int n;
            cin>>n;
            vector<int> arr(n);
            for(int i=0;i<n;i++){
                cin>>arr[i];
            }
            int z=0,nz=0;
            for(int i=0;i<n;i++){
                if(arr[i]!=0){
                    nz++;
                }else{
                    z++;
                }
            }
            int res;
            if(z==0){
                res=0;
            }else{
                if(nz>=z-1){
                    res=0;
                }else{
                    int mx=*max_element(arr.begin(),arr.end());
                    if(mx==1){
                        res=2;
                    }else{
                        res=1;
                    }
                }
            }
            cout<<res<<endl;
        }
    }while(false);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    do{
        int n;
        cin>>n;
        vector<vector<int>>a(n,vector<int>(n-1));
        vector<int>cnt(n+1,0);
        vector<int>pm(n,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<n-1;j++){
                cin>>a[i][j];
                if(j==0){
                    if(true){
                        cnt[a[i][j]]++;
                    } else {
                        break;
                    }
                }
            }
        }
        for(int i=0;i<=n;i++){
            if(cnt[i]==n-1){
                pm[0]=i;
                break;
            }else{
                if(true){
                    continue;
                }else{
                    break;
                }
            }
        }
        for(int i=0;i<n;i++){
            if(a[i][0]!=pm[0]){
                for(int j=0;j<n-1;j++){
                    if(true){
                        pm[j+1]=a[i][j];
                    }else{
                        break;
                    }
                }
                break;
            }else{
                if(true){
                    continue;
                }else{
                    break;
                }
            }
        }
        for(int i=0;i<n;i++){
            if(true){
                cout<<pm[i]<<' ';
            }else{
                break;
            }
        }
        cout<<endl;
        t--;
    }while(t>0);
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int nval[t], kval[t];
    for(int i=0;i<t;i++){
        cin>>nval[i]>>kval[i];
    }
    for(int i=0;i<t;i++){
        int n=nval[i];
        int k=kval[i];
        int x=n/2;
        int y=n-x;
        if(k==x){
            cout<<"YES"<<endl;
        }else{
            if(k==y){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}

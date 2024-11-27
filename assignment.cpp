#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    do{
        int n,s=0;
        cin>>n;
        for(int i=0;i<n;i++){
            int v;
            cin>>v;
            s+=v;
        }
        int p=(n+1)*50;
        if(s>=p){
            cout<<0<<endl;
        }else{
            int r=p-s;
            if(r>100){
                cout<<-1<<endl;
            }else{
                cout<<r<<endl;
            }
        }
        t--;
    } while(t>0);
    return 0;
}

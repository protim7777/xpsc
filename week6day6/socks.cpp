#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,x,y;
    cin>>a>>x>>y;
    int money=x+y;
    if(money>=a){
        if(money==a){
            cout<<"YES"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }else{
        if(money<a/2){
            cout<<"NO"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

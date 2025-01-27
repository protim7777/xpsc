#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long t;
    cin>>t;
    for(long long i=0;i<t;++i){
        long long x;
        cin>>x;
        if(x<=4){
            cout<<(x==1?1:2)<< endl;
        }else{
            long long s=4,a=2;
            do{
                a++;
                s++;
                s*=2;
            }while(s<x);
            cout<<a<<endl;
        }
    }
    return 0;
}

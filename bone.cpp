#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,b,l;
    cin>>x>>y>>b>>l;
    int s=0;
    for(int i=0;i<x;i++){
        s+=b;
    }
    for(int i=0;i<y;i++){
        s+=l;
    }
    cout<<s;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    const int nug=5000;
    const int star=9800;
    int money=0;
    for(int i=0;i<x+y;i++){
        if(i<x){
            money+=nug;
        }else{
            money+=star;
        }
    }
    cout<<money<<endl;
    return 0;
}

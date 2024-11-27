#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    int tcal=x-(y*z);
    do{
        if(tcal<0){
            cout<<-1<<endl;
        }else{
            cout<<tcal<<endl;
        }
    }while(false);
    return 0;
}

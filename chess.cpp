#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    long long sum=(x*2)+y;
    long long total=x+y+z;
    long long point=(total*2)-sum;
    long long game=4-total;
    long long extrapoint=0;
    bool win=false;
    do{
        if(sum+extrapoint>point){
            win=true;
            break;
        }
        extrapoint+=2;
    }while(extrapoint<=game*2);
    cout<<(win?"YES":"NO")<<endl;
    return 0;
}

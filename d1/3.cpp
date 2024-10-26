#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin >>a>>b;
    int maxc=0;
    int x;
    x=2*a-1;
    maxc=x;
    int count=0;
    do{
        if(count==0)
        {
            x=2*b-1;
        } else if(count==1)
        {
            x=a+b;
        }
        if(x>maxc)
        {
            maxc=x;
        }
        count++;
    } while(count<2);
    cout<<maxc<<endl;
    return 0;
}

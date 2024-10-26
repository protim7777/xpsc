#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin >>a>>b>>c;
    int n=a;
    do{
        if(n%c==0)
        {
            cout<<n<< endl;
            return 0;
        }
        n++;
    } while(n<=b);
    cout <<-1<< endl;
    return 0;
}

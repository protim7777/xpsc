#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        string y;
        cin>>x>>y;
        int a=count(y.begin(),y.end(),'1');
        cout<<((min(a,x-a)%2==0)?"Ramos":"Zlatan")<<endl;
    }
    return 0;
}

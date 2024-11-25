#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int i=0;
    do
    {
        int a,b,c,s=0;
        cin>>a>>b>>c;
        for(int j=0;j<a;j++)
        {
            int d;
            cin>>d;
            if(d*b<=c)
                s+=d*b;
            else
                s+=c;
        }
        cout<<s<<endl;
        i++;
    } while(i<t);
    return 0;
}

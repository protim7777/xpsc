#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin >>n>>x;
    bool first=true;
    for(int i=0;i<n;i++)
    {
        int a;
        cin >>a;
        if(a!=x)
        {
            if(!first)cout<< " ";
            cout <<a;
            first=false;
        }
    }
    cout <<endl;
    return 0;
}

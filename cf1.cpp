#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    for(int i=0;i<t;i++) 
    {
        int x;
        cin>>x;
        cout<<(x>1?x-1:0)<<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    map<pair<string,string>,bool> mp;
    for(int i=0;i<t;i++)
    {
        string a,b;
        cin>>a>>b;
        mp[ { a , b } ]=true;
    }

    cout<<mp.size();

}
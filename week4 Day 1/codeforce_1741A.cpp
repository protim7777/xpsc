#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
    string s1,s2;
    cin >>s1>>s2;

    if(s1[s1.size()-1]=='M' || s2[s2.size()-1]=='M' )
    {
        if(s1[s1.size()-1] == 'M' && s2[s2.size()-1]=='S')
        {
            cout<<'>'<<endl;
        }
        else if(s1[s1.size()-1] == 'S' && s2[s2.size()-1]=='M')
        {
            cout<<'<'<<endl;
        }
        else if(s1[s1.size()-1] == 'M' && s2[s2.size()-1]=='L')
        {
            cout<<'<'<<endl;
        }
        else if(s1[s1.size()-1] == 'L' && s2[s2.size()-1]=='M')
        {
            cout<<'>'<<endl;
        }
        else
        {
            cout<<'='<<endl;
        }
    }
    else
    {
        if(s1[s1.size()-1] == 'S' && s2[s2.size()-1]=='L')
        {
            cout<<'<'<<endl;
        }
        else if(s1[s1.size()-1] == 'L' && s2[s2.size()-1]=='S')
        {
            cout<<'>'<<endl;
        }
        else if(s1[s1.size()-1] == 'L' && s2[s2.size()-1]=='L')
        {
            if(s1.size()>s2.size()) cout<<'>'<<endl;
            else if(s1.size()< s2.size()) cout<<'<'<<endl;
            else cout<<'='<<endl;
        }
        else if(s1[s1.size()-1] == 'S' && s2[s2.size()-1]=='S')
        {
            if(s1.size()< s2.size()) cout<<'>'<<endl;
            else if(s1.size()> s2.size()) cout<<'<'<<endl;
            else cout<<'='<<endl;
        }
    }
    }
}
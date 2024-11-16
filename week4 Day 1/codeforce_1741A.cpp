#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
    string s,s2;
    cin >>s>>s2;
    if(s[s.size()-1]=='M' || s2[s2.size()-1]=='M' )
    {
        if(s[s.size()-1] == 'M' && s2[s2.size()-1]=='S')
        {
            cout<<'>'<<endl;
        }
        else if(s[s.size()-1] == 'S' && s2[s2.size()-1]=='M')
        {
            cout<<'<'<<endl;
        }
        else if(s[s.size()-1] == 'M' && s2[s2.size()-1]=='L')
        {
            cout<<'<'<<endl;
        }
        else if(s[s.size()-1] == 'L' && s2[s2.size()-1]=='M')
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
        if(s[s.size()-1] == 'S' && s2[s2.size()-1]=='L')
        {
            cout<<'<'<<endl;
        }
        else if(s[s.size()-1] == 'L' && s2[s2.size()-1]=='S')
        {
            cout<<'>'<<endl;
        }
        else if(s[s.size()-1] == 'L' && s2[s2.size()-1]=='L')
        {
            if(s.size()>s2.size()) 
            {
                cout<<'>'<<endl;
            }    
            else if(s.size()< s2.size()) 
            {
                cout<<'<'<<endl;
            }    
            else 
            {
                cout<<'='<<endl;
            }    
        }
        else if(s[s.size()-1] == 'S' && s2[s2.size()-1]=='S')
        {
            if(s.size()< s2.size()) 
            {
                cout<<'>'<<endl;
            }    
            else if(s.size()> s2.size()) 
            {
                cout<<'<'<<endl;
            }
            else 
            {
                cout<<'='<<endl;
            }    
        }
    }
    }
}

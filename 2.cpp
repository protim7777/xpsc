#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s, p;
    cin >>s>>p;
    int n=0,i=0;
    do{
        if(s[i]!=p[i])
        {
            n++;
        }
        i++;
    }while(i<s.size());
    cout<<n;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    int z=0;
    do{
        int x;
        cin>>x;
        string s;
        cin>>s;
        int r=0,c=0,i=0;
        do{
            if(s[i]=='.'){
                c++;
                r++;
            }else{
                c=0;
            }
            if(c>=3)break;
            i++;
        }while(i<x);
        cout<<(c>=3?2:r)<<endl;
        z++;
    }while(z<t);
    return 0;
}

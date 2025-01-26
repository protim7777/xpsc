#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int i=0;i<t;++i){
        int n;
        string s;
        cin>>n>>s;
        if(s[0]=='s')s[0]='.';
        if(s.back()=='p')s.back()='.';
        set<char> uc;
        for(char c:s){
            if(c!='.')uc.insert(c);
        }
        if(uc.size()<=1){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}

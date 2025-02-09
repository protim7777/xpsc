#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    do{
        string s;
        cin>>s;
        int n=s.size(),r=n;
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]){
                r=1;
                break;
            }
        }
        cout<<(r==1?1:n)<<endl;
    }while(--t);
    return 0;
}

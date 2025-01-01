#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    do{
        int n;
        cin>>n;
        string s;
        cin>>s;
        int z=0,o=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0')z++;
            else o++;
        }
        if(z==n||o==n)cout<<n<<endl;
        else cout<<"1"<<endl;
        t--;
    }while(t>0);
}

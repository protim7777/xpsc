#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;++i){
        int n;
        cin>>n;
        if(n%2){
            cout<<"NO\n";
        }else{
            char c='A';
            cout<<"YES\n";
            int j=0;
            do{
                cout<<c<<c;
                c++;
                j+=2;
            } while(j<n);
            cout<<"\n";
        }
    }
    return 0;
}

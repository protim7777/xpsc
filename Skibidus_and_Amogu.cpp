#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    do{
        string x;
        cin>>x;
        int l=x.size();
        if(l>1){
            x.erase(l-2,2);
            x+='i';
        }else x="i";
        cout<<x<<endl;
    }while(--t);
    return 0;
}

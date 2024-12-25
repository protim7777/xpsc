#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    string s="124";
    int count=0;
    for(char c:s){
        int val=c-'0';
        if(n>=val){
            n-=val;
            count++;
        }else{
            break;
        }
    }
    cout<<count<<endl;
    return 0;
}
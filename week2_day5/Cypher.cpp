#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    do{
        int n;
        cin>>n;
        vector<int>a(n);
        for(int &x : a) cin >> x;
        for(int i = 0; i < n; ++i){
            int x;
            string s;
            cin >>x>>s;
            for(char c : s) 
                a[i]=(c == 'D') ? (a[i]+1)%10 :(a[i]+9)%10;
        }
        for(int val : a) cout<<val << " ";
        cout<<endl;
    } while(--t >0);
    return 0;
}
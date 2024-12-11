#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    do{
        int n,k,p;
        cin>>n>>k>>p;
        int v_height=0,r_height=p,mx=0;
        vector<int>h(n);
        for(int i=0;i<n;++i){
            cin>>h[i];
            mx=max(mx, h[i]);
        }
        v_height=mx + k;
        for(int h_val:h)r_height+=h_val;
        r_height-=mx;
        if(v_height>r_height)
            cout<<"Ved"<<endl;
        else if(v_height<r_height)
            cout<<"Varun"<<endl;
        else
            cout<<"Equal"<<endl;
        t--;
    }while(t>0);
    return 0;
}
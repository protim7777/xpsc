#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p1,p2,p3,t1,t2;
    cin>>n>>p1>>p2>>p3>>t1>>t2;
    vector<pair<int,int>> p(n);

    for (int i = 0; i < n; i++) {
        cin >> p[i].first >> p[i].second;
    }

    int tp= 0;

    for(int i=0;i<n;i++)
    {
        int l=p[i].first;
        int r=p[i].second;

        int tw=(r-l);
        tp+= p1*tw;

        if(i<n-1)
        {
        int nxt=p[i+1].first;
        int newl=(nxt-r);
         if(newl<=t1) { 
                tp+=newl*p1;}
         else if(newl<=t1+t2) {
                tp+= (t1*p1) + ((newl-t1)*p2);}
         else {
                tp+= (t1*p1)+(t2*p2)+((newl-(t1+t2))*p3); }
        }
    }
    cout<<tp<<endl;
}
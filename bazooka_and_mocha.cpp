#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void run(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    ll i=0;
    do{
        cin>>a[i];
        i++;
    }while(i<n);
    vector<vector<ll>> v;
    vector<ll> t;
    t.push_back(a[0]);
    i=1;
    do{
        if(a[i] >= a[i - 1]) t.push_back(a[i]);
        else {
            v.push_back(t);
            t.clear();
            t.push_back(a[i]);
        }
        i++;
    }while(i<n);
    if(!t.empty()) v.push_back(t);
    if(v.size()>2){
        cout << "NO\n";
        return;
    }
    if(v.size()==1){
        cout << "YES\n";
        return;
    }
    vector<ll> c1=v[0],c2=v[1];
    i = 0;
    do{
        c1.push_back(v[1][i]);
        i++;
    }while(i<v[1].size());
    i=0;
    do{
        c2.push_back(v[0][i]);
        i++;
    }while(i<v[0].size());
    auto chk=[&](vector<ll> &x) {
        i=1;
        do{
            if(x[i]<x[i-1])return false;
            i++;
        }while(i<x.size());
        return true;
    };
    cout<<((chk(c1)||chk(c2))?"YES":"NO")<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    do{
        run();
        t--;
    }while(t>0);
    return 0;
}

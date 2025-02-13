#include<bits/stdc++.h>
using namespace std;
struct D
{
    long long s, sc;
};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    do{
        int n,m;
        cin>>n>>m;
        vector<D>a(n);
        long long c=0;
        for(int i =0; i < n; i++){
            long long r = 0, si = 0, sci=0;
            for(int j = 0; j < m; j++){
                int x;
                cin>>x;
                si+=x;
                r+=x;
                sci+=r;
            }
            a[i].s=si;
            a[i].sc=sci;
            c+=sci;
        }
        sort(a.begin(),a.end(),[](const D &x,const D &y) {
            return x.s>y.s;
        });
        long long add = 0;
        for(int r=0; r<n;r++){
            if (n - 1 - r > 0) 
                add+=(n - 1 - r)* a[r].s;
        }
        cout<<c+m*add<< "\n";
    }while(--t);
    return 0;
}
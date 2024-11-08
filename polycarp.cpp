#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int k,a,ans=0,problems=1;
    cin>>k;
    multiset<int>ml;
    while(k--){
        cin>>a;
        ml.insert(a);
    }
    do{
        auto it=ml.lower_bound(problems);
        if(it==ml.end())
        break;
        ans++;
        ml.erase(it);
        problems++;
    } while(!ml.empty());
    cout<<ans<<'\n';
    return 0;
}

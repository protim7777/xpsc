#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int f()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &x:a)cin>>x;
    sort(a.begin(), a.end());
    int m=((n+1)/2)-1,c=0,i=m;
    do{
        if(a[i]==a[m])c++;
        i++;
    }while(i<n);
    cout<<c<<endl;
    return 0;
}
int main(){
    int t;
    cin>>t;
    int x=0;
    do{
        f();
        x++;
    }while(x<t);
    return 0;
}

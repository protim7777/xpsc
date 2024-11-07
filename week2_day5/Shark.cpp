#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >>n;
    long long sum =0,odd=LLONG_MAX;
    int i=0;
    while(i<n){
        long long m;
        cin>>m;
        sum+=m;
        if(m%2!=0){
            odd=min(odd,m);
        }
        i++;
    }
    if(sum%2==0){
        cout<<sum<<endl;
    } else{
        cout<<sum-odd<< endl;
    }
    return 0;
}
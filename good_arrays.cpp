#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    do{
        int n;
        cin>>n;
        vector<int> a(n);
        long long s=0,o=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            s+=a[i];
            if(a[i]==1)o++;
        }
        cout<<(s>=o+n&&n>1?"YES":"NO")<<endl;
        t--;
    }while(t>0);
    return 0;
}

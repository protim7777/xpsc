#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long n,x,k,c=0,len=0;
        cin>>n>>x>>k;
        char arr[n];
        for(long long j=0;j<n;j++){
            cin>>arr[j];
        }
        for(long long j=0;j<n;j++){
            if(arr[j]=='1'){
                c++;
            }else{
                for(long long l=0;l<c;l++){
                    len++;
                }
            }
        }
        cout<<(len<=x&&len%k==0?1:2)<<endl;
    }
    return 0;
}

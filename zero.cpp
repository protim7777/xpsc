#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        bool flag=true;
        int idx=0;
        while(idx<n){
            cin>>arr[idx];
            idx++;
        }
        int k=0;
        while(k<(1<<8)){
            int x=0;
            int j=0;
            while(j<n){
                int tmp=x^(arr[j]^k);
                x=tmp;
                j++;
            }
            if(x==0){
                cout<<k<<endl;
                flag=false;
                break;
            }
            k++;
        }
        if(flag){
            cout<<-1<<endl;
        }
    }
    return 0;
}

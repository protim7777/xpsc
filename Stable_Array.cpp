#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n),b(n),c(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        b[n-1]=a[n-1];
        c[n-1]=0;
        
        for(int i=n-2;i>=0;i--){
            b[i]=max(a[i],b[i+1]);
        }

        for(int i=n-2;i>=0;i--){
            if(a[i]==b[i]){
                c[i]=0;
            }else{
                if(a[i]<b[i]){
                    c[i]=c[i+1]+1;
                }else{
                    c[i]=0;
                }
            }
        }

        int result=0;

        for(int i=0;i<n;i++){
            result=max(result,c[i]);
        }
        cout<<result<<endl;
    }
    return 0;
}
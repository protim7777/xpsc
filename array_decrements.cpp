#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    do{
        int n;
        cin>>n;
        vector<int> x(n),y(n);
        for(int i=0;i<n;i++)cin>>x[i];
        for(int i=0;i<n;i++)cin>>y[i];
        int d=-1,z=-1,f=0;
        for(int i=0;i<n;i++){
            if(x[i]<y[i]){
                f=1;
                break;
            }
            if(y[i]){
                if(d==-1)d=x[i]-y[i];
                else if(x[i]-y[i]!=d){
                    f=1;
                    break;
                }
            } else z=max(z,x[i]-y[i]);
        }
        do{
            cout<<(f?"NO\n":(d==-1||z<=d)?"YES\n":"NO\n");
        }while(false);
    }while(--t);
    return 0;
}

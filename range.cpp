#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int test=0;
    do{
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        int val_x=a[a.size()-1]-a[2];
        int val_y=a[a.size()-3]-a[0];
        int val_z=a[a.size()-2]-a[1];
        cout<<min({val_x,val_y,val_z})<<endl;
        test++;
    }while(test<t);
    return 0;
}

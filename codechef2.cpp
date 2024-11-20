#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    do{
        int n,m;
        cin >>n>>m;
        int a[n],b[m];
        int i=0;
        while(i<n+m){
            if(i<n)
                cin>>a[i];
            else
                cin>>b[i-n];
            i++;
        }
        int sad=0;
        i=0;
        do{
            int index=b[i]-1;
            if(a[index]>0){
                a[index]--;
            }else{
                sad++;
            }
            i++;
        }while(i<m);
        cout<<sad<<endl;
        t--;
    }while(t>0);
    return 0;
}

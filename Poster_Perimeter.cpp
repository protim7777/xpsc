#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    do{
        int n,m,k;
        cin>>n>>m>>k;
        int min=INT_MAX,r=1;
        do{
            int c=1;
            do{
                int per=2*(r+c);
                int d=abs(k-per);
                if(d<min){
                    min=d;
                }else{
                }
                c++;
            }while(c<=m);
            r++;
        }while(r<=n);
        cout<<min<<endl;
        t--;
    }while(t>0);
    return 0;
}
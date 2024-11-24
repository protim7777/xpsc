#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int *p=new int[3];
    long long s1,s2;
    int *res=new int[t];
    int i=0;
    while(i<t){
        cin>>p[0]>>p[1]>>p[2];
        if(p[0]==1){
            res[i]=1;
        }else{
            if(p[1]<p[2]){
                s1=p[0]-1;
                s2=p[2]-p[1]+p[2]-1;
                res[i]=(s1>s2)?2:(s1<s2?1:3);
            }else{
                s1=p[0]-1;
                s2=p[1]-1;
                res[i]=(s1>s2)?2:(s1<s2?1:3);
            }
        }
        i++;
    }
    for(int j=0;j<t;j++){
        cout<<res[j]<<endl;
    }
    delete[]p;
    delete[]res;
    return 0;
}

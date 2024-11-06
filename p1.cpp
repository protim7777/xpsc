#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,t;
    cin >>a>>b>>t;
    int count=0;
    if(t<=20){
        int i=0;
        do{
            count=i*b;
            i++;
        }while(i*a<=t);
    }
    cout<<count;
}

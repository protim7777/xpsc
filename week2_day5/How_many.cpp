#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,t,count=0,a=0;
    cin >>s>>t;
    while(a<=s)
    {
        int b=0;
        while(b<=s-a){
            int c=0;
            while(c<=s-a-b){
                if(a*b*c<=t){
                    count++;
                }
                c++;
            }
            b++;
        }
        a++;
    }
    cout<<count;
    return 0;
}
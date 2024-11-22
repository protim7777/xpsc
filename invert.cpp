#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    do{
        int n;
        cin>>n;
        string s;
        cin>>s;
        int x=0,y=0;
        int i=0;
        do{
            if(s[i]=='0'){
                if(i==0||s[i-1]!='0'){
                    x++;
                }
            }else{
                if(i==0||s[i-1]!='1'){
                    y++;
                }
            }
            i++;
        }while(i<n);
        cout<<min(x,y)<<endl;
    } while(--t>0);
    return 0;
}

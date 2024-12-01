#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n;i++){
            if(i+2<n){
                if(s[i+2]=='0'){
                    if(i+3>=n||s[i+3]!='0'){
                        int num=(s[i]-'0')*10+(s[i+1]-'0');
                        cout<<(char)('a'+num-1);
                        i+=2;
                    }else{
                        int num=(s[i]-'0');
                        cout<<(char)('a'+num-1);
                    }
                }else{
                    int num=(s[i]-'0');
                    cout<<(char)('a'+num-1);
                }
            }else{
                int num=(s[i]-'0');
                cout<<(char)('a'+num-1);
            }
        }
        cout<<endl;
    }
    return 0;
}

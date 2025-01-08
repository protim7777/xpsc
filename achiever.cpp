#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a;
    cin>>a;
    for(int t=0;t<a;t++){
        int n;
        cin>>n;
        int score=-1;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x>score){
                cout<<"1 ";
                score=x;
            }else{
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
    return 0;
}

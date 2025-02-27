#include<bits/stdc++.h>
using namespace std;
void play()
{
    int n;
    cin>>n;
    cout<<(n%2?"Kosuke\n":"Sakurako\n");
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int i=0;i<t;++i){
        play();
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    for(int i = 0; i < x; i++){
        int a,b,c;
        cin>>a>>b>>c;
        int t =2 *(a* b + b * c + a * c);
        cout << 1000 / t << "\n";
    }
    return 0;
}
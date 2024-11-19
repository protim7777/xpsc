#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    while(x--){
        int y;
        cin>>y;
        vector<int>a(y);
        int i=0;
        while(i<y)cin>>a[i++];
        int j=0;
        do {
            int k=j+1;
            do{
                if(a[j]!=a[k]){
                    a[k]+=(a[j]>a[k])?a[j]:a[k];
                }
                ++k;
            }while(k<y);
            ++j;
        } while(j<y-1);
        cout<<(all_of(a.begin(),a.end(),[&a](int e){return e==a[0];
        })?"YES":"NO")<<endl;
    }
    return 0;
}

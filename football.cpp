#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=0;
    do{
        int x,y;
        cin>>x>>y;
        cout<<x%3<<endl;
        i++;
    }while(i<n);
    return 0;
}

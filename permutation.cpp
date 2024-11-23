#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int x;
   cin>>x;
   for(int t=0;t<x;t++){
      int n;
      cin>>n;
      for(int i=n;i>0;i--){
         cout<<i<<" ";
      }
      cout<<'\n';
   }
   return 0;
}

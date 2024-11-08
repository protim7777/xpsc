#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int k;
   cin>>k;
   do{
      int a,b;
      cin >>a>>b;
      map<int,set<int>>u;
      for (int i=1;i<=a;i++){
         int x;
         cin>>x;
         u[x].insert(i);
      }
      int query_count=0;
      do{
         int l,r;
         cin>>l>>r;
         if(u.find(l)==u.end()||u.find(r)==u.end()){
            cout<<"NO"<<'\n';
         }else{
            auto firstL=u[l].begin();
            auto lastR=u[r].rbegin();
            if(*firstL<*lastR){
               cout<<"YES"<<'\n';
            }else{
               cout<<"NO"<<'\n';
            }
         }
         query_count++;
      } while(query_count<b);
      k--;
   }while(k>0);
   return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int n;
   long long maxSum;
   cin>>n>>maxSum;
   vector<int>nums(n);
   for(int i=0;i<n;i++){
      cin>>nums[i];
   }
   int left=0,maxLen=0;
   long long currSum=0;
   for(int right=0;right<n;right++){
      currSum+=nums[right];
      while(currSum>maxSum){
         currSum-=nums[left++];
      }
      maxLen=max(maxLen,right-left+1);
   }
   cout<<maxLen<<'\n';
   return 0;
}

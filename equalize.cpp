#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int m;
        cin>>m;
        vector<int> arr(m);
        for(int i=0;i<m;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        arr.erase(unique(arr.begin(),arr.end()),arr.end());
        int max_len=0,j=0;
        for(int i=0;i<arr.size();i++){
            while(j<arr.size()&&arr[j]-arr[i]<m){
                j++;
            }
            max_len=max(max_len,j-i);
        }
        cout<<max_len<<endl;
    }
    return 0;
}

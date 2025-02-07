#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    do{
        int m;
        cin>>m;
        vector<int> arr(m);
        for(int i=0;i<m;i++)cin>>arr[i];
        int min_score=INT_MAX;
        for(int i=0;i<m-1;i++){
            int diff=abs(arr[i]-arr[i+1]);
            if(diff<min_score)min_score=diff;
        }
        cout<<min_score<<endl;
        t--;
    }while(t>0);
    return 0;
}

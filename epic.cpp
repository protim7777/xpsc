#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,a;
        cin>>n;
        map<int,int>count;
        for(int i=0;i<n;i++){
            cin>>a;
            count[a]++;
        }
        priority_queue<int>pq;
        for(auto&[key,freq]:count){
            pq.push(freq);
        }
        do{if(pq.size()<=1)
            break;
            int top1=pq.top();pq.pop();
            int top2=pq.top();pq.pop();
            if(--top1>0)pq.push(top1);
            if(--top2>0)pq.push(top2);
        }while(pq.size()>1);
        cout<<(pq.empty()?0:pq.top())<<'\n';
    }
    return 0;
}

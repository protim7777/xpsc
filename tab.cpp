#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    list<string> order;
    unordered_map<string, list<string>::iterator> seen;
    while(n--){
        string prog;
        cin>>prog;
        if(seen.find(prog)!=seen.end()){
            order.erase(seen[prog]);
        }
        order.push_front(prog);
        seen[prog]=order.begin();
    }
    for(const auto& p : order){
        cout<<p.substr(p.size()-2);
    }
    cout<<endl;
    return 0;
}

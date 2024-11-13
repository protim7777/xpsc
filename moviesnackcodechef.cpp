#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin >>a>>b>>c;
    int min_cost;
    do{
        int cost1=(a*2)+(b*3);
        int cost2=(c*2)+b;
        min_cost=min(cost1,cost2);
    }while(false);
    cout<<min_cost<< endl;
    return 0;
}

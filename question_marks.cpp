#include<bits/stdc++.h>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    long t;
    std::cin>>t;
    while(t--){
        long n;
        std::cin>>n;
        std::string s;
        std::cin>>s;
        std::vector<long> counts(4,0);
        for(char ch:s){
            if (ch == 'A') counts[0]++;
            else if (ch == 'B') counts[1]++;
            else if (ch == 'C') counts[2]++;
            else if (ch == 'D') counts[3]++;
        }
        long cnt=0;
        for(long count:counts){
            cnt += std::min(count, n);
        }
        std::cout<<cnt<<'\n';
    }
    return 0;
}

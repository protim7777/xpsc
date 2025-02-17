#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    do{
        int n;
        cin>>n;
        string s;
        cin>>s;
        int res = INT_MAX, ch = 'a';
        do{
            int l = 0, r = n - 1, cnt = 0;
            do{
                if(s[l] == s[r]) l++, r--;
                else if (s[l] == ch) l++, cnt++;
                else if (s[r] == ch) r--, cnt++;
                else{
                    cnt = INT_MAX;
                    break;
                }
            }while(l <r);
            res = min(res, cnt);
        }while (++ch <= 'z');
        cout<<(res == INT_MAX ? -1 : res) << "\n";
    }while (--t);
    return 0;
}

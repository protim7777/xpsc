#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    do{
        int n;
        cin>>n;
        string s, t_input;
        cin >> s >> t_input;
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] != t_input[i]) {
                cnt++;
            }
        }
        cout << (cnt % 2 == 0 ? "YES" : "NO") << endl;
        t--;
    } while(t > 0);
    return 0;
}
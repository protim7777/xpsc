#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; 
    cin >> t;

    int i = 0;
    do 
    {
        int a, b; 
        cin >> a >> b;

        int n = (b + 1) / 2;
        a -= (n * 15 - b * 4);
        a = max(a, 0);
        n += (a + 14) / 15;
        
        cout << n << endl;

        i++;
    } while (i < t);

    return 0;
}

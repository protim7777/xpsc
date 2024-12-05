#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string s = "abcdefghijklmnopqrstuvwxyz";
    while (t--) {
        int n;
        cin >> n;
        map<char, int> m;
        for (char c : s)
            m[c] = 0;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int idx = 0;
        do {
            char ch = '\0';
            int x = v[idx];
            int i = 0;
            do {
                char c = s[i];
                if (x == m[c]) {
                    ch = c;
                    m[c]++;
                    break;
                }
                i++;
            } while (i < s.size());
            if (ch != '\0')
                cout << ch;
            idx++;
        } while (idx < n);
        cout << endl;
    }
    return 0;
}

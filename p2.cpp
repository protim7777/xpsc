#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    set<char>letters;
    for (int i=0;i<s.size();i++)
    {
        letters.insert(s[i]);
    }
    for (char c ='a';c<='z';c++)
    {
        if (letters.find(c)==letters.end())
        {
            cout << c;
            return 0;
        }
    }
    cout << "None" << endl;
    return 0;
}

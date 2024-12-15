#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin >> n;
do {
string str;
cin >> str;
reverse(str.begin(), str.end());
for (char &ch : str) {
if (ch == 'p') ch = 'q';
else if (ch == 'q') ch = 'p';
}
cout << str << endl;
n--;
} while (n > 0);
return 0;
}
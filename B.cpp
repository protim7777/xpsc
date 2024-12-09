#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  int t;
  cin >> t;
  do {
      int x, y;
      cin >> x >> y;
      if (y <= x - 1) {
          if (y == x - 1 || y < x - 1) {
              cout << "yes" << endl;
          } else {
              cout << "no" << endl;
          }
      } else {
          if (y > x - 1) {
              cout << "no" << endl;
          } else {
              cout << "yes" << endl;
          }
      }
      t--;
  } while (t > 0);

  return 0;
}
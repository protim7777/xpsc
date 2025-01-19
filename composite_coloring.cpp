#include<bits/stdc++.h>
using namespace std;
vector<int> p = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin >> t;
   for (int tc = 0; tc < t; tc++) {
      int n;
      cin >> n;
      vector<int> a(n);
      for (int i = 0; i < n; i++) cin >> a[i];
      map<int, vector<int>> m;
      for (int i = 0; i < n; i++) {
         for (int x : p) {
            if (a[i] % x == 0) {
               m[x].push_back(i);
               break;
            }
         }
      }
      vector<int> c(n);
      int clr = 1;
      for (auto& [x, idxs] : m) {
         for (int i : idxs) c[i] = clr;
         clr++;
      }
      cout << m.size() << '\n';
      for (int i : c) cout << i << " ";
      cout << '\n';
   }
   return 0;
}

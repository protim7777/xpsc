#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin >> t;
   for (int tc = 0; tc < t; tc++) {
      int n;
      cin >> n;
      vector<int> arr(n);
      for (int i = 0; i < n; i++) cin >> arr[i];
      map<int, int> freq;
      for (int i = 0; i < n; i++) {
         for (int d = 2; d * d <= arr[i]; d++) {
            while (arr[i] % d == 0) {
               freq[d]++;
               arr[i] /= d;
            }
         }
         if (arr[i] > 1) freq[arr[i]]++;
      }
      bool valid = true;
      for (auto [p, f] : freq) {
         if (f % n != 0) {
            valid = false;
            break;
         }
      }
      cout << (valid ? "YES" : "NO") << '\n';
   }
   return 0;
}

#include<bits/stdc++.h>
using namespace std;
bool isPrime(long long p){
   if (p == 1) return false;
   for (int d = 2; d * d <= p; d++) {
      if (p % d == 0) return false;
   }
   return true;
}
bool isSquare(long long num) {
   long long root = sqrtl(num);
   return (root * root == num);
}
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin >> t;
   for (int i = 0; i < t; i++) {
      long long val;
      cin >> val;
      if (isSquare(val)) {
         if (isPrime(sqrtl(val))) {
            cout << "YES\n";
         } else {
            cout << "NO\n";
         }
      } else {
         cout << "NO\n";
      }
   }
   return 0;
}

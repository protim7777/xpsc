#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main() {
    int t;
    cin >> t;
    do {
        ll n, a, b, c;
        cin >> n >> a >> b >> c;
        ll sum = a + b + c;
        ll fc = n / sum;
        ll r = n % sum;
        ll day = fc * 3;

        if (r > 0) {
            if (r <= a) {
                day++;
            } else if (r <= a + b) {
                day += 2;
            } else {
                day += 3;
            }
        }

        cout << day << endl;

        t--;
    } while (t > 0);

    return 0;
}
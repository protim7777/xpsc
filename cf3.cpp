#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        long long m, a, b, c;
        cin >> m >> a >> b >> c;
        long long row_one = 0, row_two = 0, remaining_seats = 0, for_c = 0;
        if (a <= m) {
            row_one = a;
        } else {
            row_one = m;
        }
        if (b <= m) {
            row_two = b;
        } else {
            row_two = m;
        }
        remaining_seats = (m - row_one) + (m - row_two);
        if (c <= remaining_seats) {
            for_c = c;
        } else {
            for_c = remaining_seats;
        }
        cout << row_one + row_two + for_c << endl;
    }
    return 0;
}
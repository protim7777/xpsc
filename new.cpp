#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    do {
        int N, M, len = 0, count = 0;
        cin >> N >> M;
        vector<int> sizes(N);
        for (int i = 0; i < N; i++) {
            string str;
            cin >> str;
            sizes[i] = str.length();
        }
        for (auto sz : sizes) {
            if (sz + len <= M) {
                len += sz;
                count++;
            } else {
                break;
            }
        }
        cout << count << endl;
        T--;
    } while (T > 0);
    return 0;
}

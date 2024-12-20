#include <bits/stdc++.h>
using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        string str;
        cin >> str;

        int len = str.length();
        char firstChar = str[0];
        char lastChar = str[len - 1];

        int firstIndex = firstChar - 'a' + 1;
        int lastIndex = lastChar - 'a' + 1;

        vector<pair<int, int>> intermediate;

        for (int i = 1; i < len - 1; ++i) {
            int currentIndex = str[i] - 'a' + 1;
            if ((firstIndex <= currentIndex && currentIndex <= lastIndex) || (lastIndex <= currentIndex && currentIndex <= firstIndex)) {
                intermediate.emplace_back(currentIndex, i + 1);
            }
        }

        if (firstIndex <= lastIndex) {
            sort(intermediate.begin(), intermediate.end());
        } else {
            sort(intermediate.rbegin(), intermediate.rend());
        }

        vector<int> result = {1};
        for (const auto &p : intermediate) {
            result.push_back(p.second);
        }
        result.push_back(len);

        int distance = abs(firstIndex - lastIndex);
        int steps = result.size();

        cout << distance << " " << steps << "\n";

        for (int i = 0; i < steps; ++i) {
            cout << result[i] << (i + 1 == steps ? "\n" : " ");
        }
    }

    return 0;
}

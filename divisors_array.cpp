#include <bits/stdc++.h>
#define MOD 1000000007
typedef long long ll;
using namespace std;
unordered_map<int, int> factorize(int x) {
    unordered_map<int, int> f;
    for (int i = 2; i * i <= x; ++i) {
        while (x % i == 0) {
            if (f.find(i) != f.end()) f[i]++;
            else f[i] = 1;
            x /= i;
        }
    }
    if (x > 1) {
        if (f.find(x) != f.end()) f[x]++;
        else f[x] = 1;
    }
    return f;
}
unordered_map<int, int> factFactors(int m) {
    unordered_map<int, int> tF;
    for (int i = 2; i <= m; ++i) {
        unordered_map<int, int> f = factorize(i);
        for (auto& p : f) {
            if (tF.find(p.first) != tF.end()) tF[p.first] += p.second;
            else tF[p.first] = p.second;
        }
    }
    return tF;
}
ll getDivisors(const unordered_map<int, int>& f) {
    ll d = 1;
    for (auto& p : f) {
        if (p.second > 0) d = (d * (p.second + 1)) % MOD;
    }
    return d;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    unordered_map<int, int> mF = factFactors(m);
    vector<ll> res(n);
    for (int i = 0; i < n; ++i) {
        unordered_map<int, int> cF = mF;
        unordered_map<int, int> aF = factorize(a[i]);
        for (auto& p : aF) {
            if (cF.find(p.first) != cF.end()) cF[p.first] += p.second;
            else cF[p.first] = p.second;
        }
        res[i] = getDivisors(cF);
    }
    for (int i = 0; i < n; ++i) cout << res[i] << " ";
    cout << endl;
    return 0;
}
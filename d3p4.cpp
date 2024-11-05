#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    string ref = "Timur";
    sort(ref.begin(), ref.end());
    do{
        int n;
        string s;
        cin >> n >> s;
        if (n == 5){
            sort(s.begin(), s.end());
            cout << (s == ref ? "YES" : "NO") << endl;
        } else{
            cout << "NO" << endl;
        }
    } while(--t > 0);
    return 0;
}

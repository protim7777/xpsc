#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int sz;
        cin >> sz;
        vector<int> arr(sz);
        for(int i = 0; i < sz; i++)
        cin >>arr[i];
        sort(arr.begin(), arr.end());
        bool tur = true;
        for(int i = 0; i < sz - 1; i++) {
            if (tur){
                arr.erase(arr.begin());
                tur = false;
            }else{
                arr.pop_back();
                tur = true;
            }
        }
        cout<<arr[0]<<'\n';
    }
    return 0;
}

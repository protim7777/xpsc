#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    do{
        int n;
        cin>>n;
        int mat[n][n];
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                cin >> mat[i][j];
        int res = 0;
        for(int k = 0; k < n; k++) {
            int i = 0, j = k, mn = 0;
            while(i < n && j < n) {
                if (mat[i][j] < 0) mn = min(mn, mat[i][j]);
                i++, j++;
            }
            res+=abs(mn);
        }
        for(int k = 1; k < n; k++) {
            int i= k, j = 0, mn = 0;
            while(i < n && j < n) {
                if(mat[i][j] < 0) mn = min(mn, mat[i][j]);
                i++, j++;
            }
            res+=abs(mn);
        }
        cout<<res<<'\n';
        t--;
    } while(t>0);
    return 0;
}

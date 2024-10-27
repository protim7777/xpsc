#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin >>n;
    int arr[4]={0};
    int x =n.length()-1, y=3;
    do{
        if(x>=0)
        {
            arr[y]=n[x]- '0';
            x--;
        }
        y--;
    } while(y>=0);
    for(int i=0; i<4; i++)
    {
        cout << arr[i];
    }
    return 0;
}

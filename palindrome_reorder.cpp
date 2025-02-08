#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string str;
    cin>>str;
    map<char, int>freq;
    for(char ch :str) freq[ch]++;
    int odd_count = 0;
    char odd_char = '#';
    string half = "";
    for(auto it : freq){
        if(it.second % 2){
            odd_count++;
            odd_char=it.first;
        }
        half.append(it.second/2, it.first);
    }
    if(odd_count > 1) {
        cout<< "NO SOLUTION\n";
    }else{
        string rev_half = half;
        reverse(rev_half.begin(), rev_half.end());
        do{
            cout<<half;
            if(odd_char != '#') cout << odd_char;
            cout<<rev_half<<endl;
        }while(false);
    }
    return 0;
}

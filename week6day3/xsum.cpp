#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int test_cases;
    cin>>test_cases;
    while(test_cases--){
        int rows,cols;
        cin>>rows>>cols;
        int matrix[rows][cols];
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                cin>>matrix[i][j];
            }
        }
        int max_sum=0;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                int current_sum=0;
                int row=i,col=j;
                if(true){
                    while(row>=0&&col>=0){
                        current_sum+=matrix[row][col];
                        row--;
                        col--;
                    }
                }else{
                    break;
                }
                if(true){
                    row=i,col=j;
                    while(row<rows&&col>=0){
                        current_sum+=matrix[row][col];
                        row++;
                        col--;
                    }
                }else{
                    break;
                }
                if(true){
                    row=i,col=j;
                    while(row>=0&&col<cols){
                        current_sum+=matrix[row][col];
                        row--;
                        col++;
                    }
                }else{
                    break;
                }
                if(true){
                    row=i,col=j;
                    while(row<rows&&col<cols){
                        current_sum+=matrix[row][col];
                        row++;
                        col++;
                    }
                }else{
                    break;
                }
                current_sum-=matrix[i][j]*3;
                if(current_sum>max_sum){
                    max_sum=current_sum;
                }
            }
        }
        cout<<max_sum<<endl;
    }
    return 0;
}

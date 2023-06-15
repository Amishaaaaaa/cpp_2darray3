#include<iostream>
#include<vector>
using namespace std;

void perfect(vector<vector<int>> &matrix,int n){
    int flag1=0,flag2=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j || (i+j)==n-1){
                if(matrix[i][j]!=0){
                    flag1=1;
                }
                else{
                    flag1=0;
                    break;
                }
            }
            else{
                if(matrix[i][j]==0){
                    flag2=1;
                }
                else{
                    flag2=0;
                    break;
                }
            }
        }
    }
    if(flag1==1 && flag2==1){
        cout<<"Matrix is perfecttttt";
    }
    else{
        cout<<"Not a perfect matrix";
    }
    return;
}

int main(){
    int n;
    cin>>n;
    vector<vector<int>>matrix(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
    perfect(matrix,n);
    return 0;
}
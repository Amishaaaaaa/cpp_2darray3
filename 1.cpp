#include<iostream>
#include<vector>
using namespace std;

void upper(vector<vector<int>> &matrix,int n){
    //int n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<=j){
                cout<<matrix[i][j]<<" ";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return;
}

int main(){
    int n;
    cin>>n;
    vector<vector<int>> matrix(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
    upper(matrix,n); 
    return 0;
}
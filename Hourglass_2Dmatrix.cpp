/* Programmer =  Roshan Mehra
Purpose = Q3 - You are given an m x n integer matrix grid. Here m>=3 and n>=3
We define an hourglass as a part of the matrix with the following shape:
Date = 05/12/2022  */

#include<iostream>
#include<vector>
using namespace std;

int Hourglass(vector<vector<int>> &vec){
    int ans = INT_MIN;
    int sumofhourglass;

    for(int i=0; i<=vec.size()-3; i++){

        for(int j=0; j<=vec[i].size()-3; j++){

            sumofhourglass = 0;
            for(int k=j; k<j+3; k++){
                sumofhourglass = sumofhourglass + vec[i][k];
                sumofhourglass = sumofhourglass + vec[i+2][k];
            }
            sumofhourglass = sumofhourglass + vec[i+1][j+1];
            if(ans<sumofhourglass){
                ans = sumofhourglass;
            }
        }
    }
    return ans;
}

int main(){
    int n,m;
    cin>>n>>m;

    vector<vector<int>> ans(n, vector<int> (m));

    for(int i=0; i<n; i++){

        for(int j=0; j<m; j++){
            cin>>ans[i][j];
        }
    }

    cout<<Hourglass(ans);
    return 0;
}
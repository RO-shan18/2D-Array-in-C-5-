/* Programmer =  Roshan Mehra
Purpose = Q1 - Given a 2D matrix with m rows and n columns containing integers. Print and return the row
number with maximum sum in the array.
Date = 05/12/2022  */

#include<iostream>
#include<vector>
using namespace std;
//dry and run process

/*
[{1 10 16}
 {4 9 11}
 {7 15 17}]

i=2, j=2;
maxsum = 16;
maxrowindex = 2'
*/

int Maxrowsum(vector<vector<int>> &vec){
    int maxsum = INT_MIN;
    int maxrowindex = -1;

    for(int i=0; i<vec.size(); i++){

        for(int j=1; j<vec[i].size(); j++){
            vec[i][j] += vec[i][j-1];

            if(j == vec[i].size()-1){
                if(maxsum < vec[i][j]){
                    maxsum = vec[i][j];
                    maxrowindex = i;
                }   
            } 
        }
    }

   
    return maxrowindex;
}

int main(){
    int n, m;
    cin>>n>>m;

    vector<vector<int>> ans(n, vector<int> (m));
    for(int i=0; i<n; i++){

        for(int j=0; j<m; j++){

            cin>>ans[i][j];
        }
    }

    cout<<Maxrowsum(ans);
    return 0;
}
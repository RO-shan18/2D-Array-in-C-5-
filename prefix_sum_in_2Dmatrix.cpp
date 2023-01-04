/* Programmer =  Roshan Mehra
Purpose = Q2 - Given a matrix arr[][] of integers, print the prefix sum matrix for it.
Date = 05/12/2022  */

#include<iostream>
#include<vector>
using namespace std;

void Prefixmatrix(vector<vector<int>> &vec){

    for(int i=0; i<vec.size(); i++){

        for(int j=1; j<vec[i].size(); j++){
            vec[i][j] += vec[i][j-1];
        }
    }

    for(int i=1; i<vec.size(); i++){

        for(int j=0; j<vec[i].size(); j++){
            vec[i][j] += vec[i-1][j];
        }
    }

    for(int i=0; i<vec.size(); i++){

        for(int j=0; j<vec[i].size(); j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
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
    Prefixmatrix(ans);

    return 0;
}
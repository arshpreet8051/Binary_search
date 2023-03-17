#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Function to get transpose in S.C --> O(1)
// the catch is loop sari row and col tk nahi chalani
// i from 0 to row and j from i+1 to col

void tranpose_space_efficient(vector<vector<int>>&v){

    int row = v.size();
    int col = v[0].size();

    for(int i = 0;i<row;i++){
        for(int j = i+1;j<col;j++){
            swap(v[i][j],v[j][i]);
        }
    }
}

// function to get transpose using extra space

vector<vector<int>> transpose(vector<vector<int>> v){

    int row = v.size();
    int col = v[0].size();

    // NOTE :
        vector<vector<int>> ans(col,vector<int>(row,0));

    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            ans[j][i] = v[i][j];
        }
    }
    return ans;
}

// function to print row-wise
void print_row_wise(vector<vector<int>>&v){

    cout<<"Printing row wise"<<endl;
    int r = v.size();
    int c = v[0].size();

    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}


int main(){
    cout<<"enter no' of rows : ";
    int row ;
    cin>>row;

    cout<<"enter no' of cols : ";
    int col;
    cin>>col;

    vector<vector<int>>v(row,vector<int>(col,0));


    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            cout<<"enter data for row "<<i<<" and col "<<j<<" : ";
            cin>>v[i][j];
        }
        cout<<endl;
    }

    // getting transpose S.C. --> O(row*col)
    cout<<"Transpose"<<endl;
    vector<vector<int>> ans = transpose(v);
    print_row_wise(ans);
    // getting tranpose S.C. --> O(1)
    cout<<"Transpose space efficient"<<endl;
    tranpose_space_efficient(v);
    print_row_wise(v);
    
}
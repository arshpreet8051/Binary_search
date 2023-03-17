#include<iostream>
#include<bits/stdc++.h>
using namespace std;

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

// function to print col-wise
void print_col_wise(vector<vector<int>>&v){

    cout<<"Printing col wise"<<endl;
    int r = v.size();
    int c = v[0].size();

    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            cout<<v[j][i]<<" ";
        }
        cout<<endl;
    }
}

// function to return sum of elements of each row

void row_sum(vector<vector<int>>&v){

    int row = v.size();
    int col = v[0].size();

    for(int i = 0;i<row;i++){
        int sum = 0;
        for(int j = 0;j<col;j++){
            sum+=v[i][j];
        }
        cout<<"Sum of "<<i<<"-th row is : "<<sum<<endl;
    }

}

int main(){

    // way to intialize 2-D vector ---- > vector<vector<int>> v(3,vector<int>(3,0));

    
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


    // printing row-wise
    print_row_wise(v);

    //row sum
    row_sum(v);
}
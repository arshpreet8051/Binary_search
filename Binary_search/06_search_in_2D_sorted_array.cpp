#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Case -> 1 
// complete sorted 2-D matrix
// {1,2,3,4},
// {5,6,7,8},
// {9,10,11,12}

// Babbar wali approach

int search_in_2D_array(vector<vector<int>> matrix,int target){

    int row = matrix.size();
    int col = matrix[0].size();

    int s = 0;
    int e = row*col-1;

    while(s<=e){

        int mid = s+(e-s)/2;

        int row_index = mid/col;                // formula to get row-index
        int col_index = mid%col;                // formula to get col-index

        int ele = matrix[row_index][col_index];

        if(ele == target){
            return true;
        }

        else if(ele > target){
            e = mid-1;
        }

        else{
            s = mid+1;
        }
    }

    return false;
}


// Case -> 2
// 2D matrix is not completly sorted
// but row-wise and column-wise sorted
// { { 3, 30, 38},
//   {36, 43, 60},
//   {40, 51, 69} }


// Striver wali approach

//start from top-most rightest elemet 
// if found return true
// if small increase row
// if greater decrease col


bool search_in_2d_marix(vector<vector<int>> matrix,int x){

    int row = matrix.size();
    int col = matrix[0].size();

    int i = 0;
    int j = col-1;

    while( i<row and j>=0){

        if(matrix[i][j] == x){return true;}

        else if(matrix[i][j] > x){j--;}

        else{i++;}
    }
    return false;

    }
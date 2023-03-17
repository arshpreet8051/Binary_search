#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Function to get left-most index
long long get_left_index(vector<long long>&v, long long x){

    long long s = 0;
    long long e = v.size()-1;

    long long ans = -1;

    while(s<=e){

        long long mid = s+(e-s)/2;

        if(v[mid] == x){    // je occuerence mil gye ta store krke left hoja
            ans = mid;
            e = mid-1;
        }
        else if(v[mid] > x){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    return ans;
}

// Function to get right-most index
long long get_right_index(vector<long long>&v,long long x){

    long long s = 0;
    long long e = v.size()-1;

    long long ans = -1;

    while(s<=e){

        long long mid = s+(e-s)/2;

        if(v[mid] == x){    // je occuerence mil gye ta store krke right hoja
            ans = mid;
            s = mid+1;
        }
        else if(v[mid] > x){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    return ans;
}

int main(){


    return 0;
}
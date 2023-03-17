#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int binary_search_algo(vector<int>& v,int k){

    int s = 0;
    int e = v.size()-1;

    while(s<=e){

        int mid = s+(e-s)/2;

        if(v[mid] == k){
            return mid;
        }

        else if(v[mid] > k){
            e = mid-1;
        }

        else{
            s = mid+1;
        }
    }
    return -1;
}

int main(){

    vector<int> v = {12,23,33,45,57,67};
    return binary_search_algo(v,45);

    return 0;
}
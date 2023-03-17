#include<iostream>
#include<bits\stdc++.h>
using namespace std;

// Useful for searching in large number of elements
// Helpful in searching in unbounded array

int binary_search(vector<int>&arr,int s,int e,int x){

    while(s<=e){

        int mid = s+(e-s)/2;

        if(arr[mid] == x){
            return mid;
        }

        else if(arr[mid] > x){
            e = mid-1;
        }

        else{
            s = mid+1;
        }
    }
    return -1;
}

int exponential_search(vector<int>& arr,int x){

    if(arr[0]==x){return 0;}

    int i = 1;

    while(i<arr.size() and arr[i]<=x){
        i = i*2;
    }

    int s = i/2;
    int e = i < arr.size()-1 ? i : arr.size()-1;

    return binary_search(arr,s,e,x);
}

int main(){

    vector<int> test = {12,22,23,34,35,55,56,76,87};
    int i = exponential_search(test,35);

    if(i == -1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Element found at "<<i<<endl;
    }
}
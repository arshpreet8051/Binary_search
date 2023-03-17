#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int search_in_rotated_sorted_array(int arr[],int l,int h,int key){

    int pivot = get_pivot(arr,l,h);

    if(key >= arr[0] and key <= arr[pivot-1]){
        return binary_search(arr,0,pivot-1,key);
    }
    else{
        return binary_search(arr,pivot+1,h,key);
    }
}

int get_pivot(int arr[],int l,int h){

    int s = l;
    int e = h;

    while(s<e){

        int mid = s+(e-s)/2;

        if(arr[mid] >= arr[0]){
            s = mid+1;
        }

        else{
            e = mid;
        }
    }
    return s;
}

int binary_search(int arr[],int s,int e,int x){

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
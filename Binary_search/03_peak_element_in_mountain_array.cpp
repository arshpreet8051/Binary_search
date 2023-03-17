#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int bitonic_point(int arr[],int n){

    int s = 0;
    int e = n-1;

    while(s<e){                // here we are not using (s<=e) coz we are moving e = mid

        int mid = s+(e-s)/2;

        if(arr[mid] < arr[mid+1]){  // if the mid lies in 1st slope move ahead
            s = mid+1;
        }

        else{
            e = mid;                // e = mid coz if we e = mid-1 we may lost our ans that may be at mid
        }
    }

    return arr[s];

}

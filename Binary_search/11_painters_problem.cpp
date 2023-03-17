#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long long painters_problem(int arr[],int n,int k){

    long long s = 0;
    long long e = accumulate(arr,arr+n,0LL); //take care that u pass long long 0 in accumulate function
    long long ans = -1;

    while(s<=e){

        long long mid = s+(e-s)/2;

        if(is_possible_ans(arr,n,k,mid)){   // Predicate Function
            ans = mid;
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    return ans;
}

bool is_possible_ans(int arr[],int n,int k,long long mid){

    long long time_count = 0;
    long long painter = 1;

    for(int i = 0;i<n;i++){
        if(time_count + arr[i] <= mid){
            time_count += arr[i];
        }
        else{
            painter++;
            if(painter>k or arr[i] > mid){
                return false;
            }
            time_count = 0;
            time_count+=arr[i];

        }
    }
    return true;
}
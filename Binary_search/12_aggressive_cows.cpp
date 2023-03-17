#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int aggressive_cows(vector<int>& stalls,int n,int k){

    sort(stalls.begin(),stalls.end());

    int s = 0;
    int e = stalls[n-1] - stalls[0];
    int ans = -1;
    
    while(s<=e){

        int mid = s+(e-s)/2;

        if(is_possible_ans(stalls,n,k,mid)){
            ans = mid;
            s = mid+1;
        }
        else{
            e = mid-1;
        }
    }
    return ans;
}

bool is_possible_ans(vector<int>&arr,int n,int k,int mid){

    int cows = 1;
    int last_pos = arr[0];

    for(int i = 0;i<n;i++){

        if(arr[i]-last_pos >= mid){
            cows++;
            last_pos = arr[i];
            if(cows==k){return true;}
        }
    }
    return false;
}
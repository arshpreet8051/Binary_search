#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool is_possible_ans(vector<int>&arr,int np,int mid){

    int currP = 0;

    for(int i = 0;i<arr.size();i++){
        int r = arr[i];
        int j = 1;
        int time_taken = 0;

        while(true){
            if(time_taken + j*r <= mid){
                ++currP;
                time_taken += j*r;
                j++;
            }
            else{
                break;
            }
        }

        if(currP >= np){
            return true;
        }

    }
    return false;
        
}

int min_time_to_cook(vector<int>&arr,int np){

    int s = 0;
    int highest_rank = *max_element(arr.begin(),arr.end());
    int e = highest_rank * (np * (np+1)/2);
    int ans = 0;

    while(s<=e){

        int mid = s+(e-s)/2;

        if(is_possible_ans(arr,np,mid)){
            ans = mid;
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    return ans;
}

int main(){

    int T;
    cin>>T;
    while(T--){
        int np,nc;
        cin>>np>>nc;
        vector<int>cookRanks;
        while(nc--){
            int r;
            cin>>r;
            cookRanks.push_back(r);
        }

        cout<<min_time_to_cook(cookRanks,np)<<" ";
    }
}
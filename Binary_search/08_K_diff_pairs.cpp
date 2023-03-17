#include<iostream>
#include<bits/stdc++.h>
using namespace std;

 int bs(vector<int>&nums,int s,int x){

        int e = nums.size()-1;

        while(s<=e){
            int mid = s+(e-s)/2;

            if(nums[mid] == x){return mid;}

            else if(nums[mid] > x){
                e = mid-1;
            }
            else{
                s = mid+1;
            }
        }
        return -1;
    }
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        set<pair<int,int>> s;

        for(int i = 0;i<nums.size();i++){
            if(bs(nums,i+1,nums[i]+k) != -1){
                pair<int,int> p = make_pair(nums[i],nums[i]+k);
                s.insert(p);
            }
        }
        return s.size();
    }
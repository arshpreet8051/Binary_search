#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool can_be_possible_ans(long long int mid,vector<long long int> arr,long long int w){

    long long int woods = 0;
    
    for(long long int i = 0;i<arr.size();i++){
        if(arr[i] > mid){
            woods += arr[i]-mid;
        }
    }
    return (woods >= w);
}

long long int max_height_of_saw(long long int w,vector<long long int> arr){

    long long int s = 0;
    long long int e = *max_element(arr.begin(),arr.end());
    long long int ans = -1;

    while(s<=e){

        long long int mid = s+(e-s)/2;
        if(can_be_possible_ans(mid,arr,w)){
            ans = mid;
            s = mid+1;
        }
        else{
            e = mid-1;
        }
    }
    return ans;
    

}

int main(){


    long long int n;
    long long int w;

    cin>>n>>w;
    vector<long long int> v;
    while(n--){
        long long int key;
        cin>>key;
        v.push_back(key);
    } 

    cout<<max_height_of_saw(w,v);
}
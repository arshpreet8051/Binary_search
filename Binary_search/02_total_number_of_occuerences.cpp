#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Formaula to get total number of occuerences
// right-most occuerence - left_most_occuerence + 1;

int get_total_no_of_occuerences(int arr[],int n,int x){

    int lower = lower_bound(arr,arr+n,x) - arr;     // left_most
    int upper = upper_bound(arr,arr+n,x) - arr;     // right_most
    upper--;                                        // upper-- coz 1 extra return krda

    int ans = upper - lower + 1;
    return ans;


}

int main(){

    return 0;
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int get_pivot(vector<int> v){
    int s = 0;
    int e = v.size()-1;
    int mid = s + (e-s)/2;

    while(s<e){

        if(v[mid] > v[0] ){
            s = mid+1;
        }
        else{
            e = mid;
        }
        
        mid = s + (e-s)/2; 
    }
    return e;
}
int main(){

    vector<int> v = {4,5,1,2,3};

    int ans = get_pivot(v);

    cout<<"The pivot is : "<<v[ans];


    return 0;
}
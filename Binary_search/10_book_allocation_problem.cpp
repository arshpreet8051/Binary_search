#include<bits/stdc++.h>
using namespace std;

bool can_be_possible_ans(vector<int>&arr,int mid,int students){

    int page_sum = 0;
    int student_count = 1;

    for(int i = 0;i<arr.size();i++){

        if(page_sum + arr[i] <= mid){
            page_sum+=arr[i];
        }
        else{
            student_count++;
            if(student_count > students or arr[i] > mid){
                return false;
            }
            page_sum = 0;
            page_sum+=arr[i];
        }
    }
    return true;
}
int allocate_books(vector<int>&arr,int students){

    int start = 0;
    int end = accumulate(arr.begin(),arr.end(),0);
    int ans = -1;

    if(students > arr.size()){return ans;}

    while(start <= end){

        int mid = start + (end - start)/2;

        if(can_be_possible_ans(arr,mid,students)){  //Predicate Function
            ans = mid;
            end = mid-1;
        }
        else{
            start = mid+1;
        }

    }
    return ans;
}

int main(){

    return 0;
}

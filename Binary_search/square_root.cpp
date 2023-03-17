#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long long int sqrt(int x){

    long long int ans = -1;

    long long int s = 0;
    long long int e = x;    
    long long int mid = s+(e-s)/2;

    while(s<=e){

        long long int sqaure = mid*mid;

        if(sqaure == x){return mid;}

        else if(sqaure < x){
            ans = mid;
            s = mid+1;
        }
        else{
            e = mid-1;
        }

        mid = s+(e-s)/2;
    }
    return ans;
}
float precision(long long int ans,long long int x){

    float main_ans = -1;
    for(float i = 0.1;i<=0.9;i++){

        float a = float(ans) + i;

        if(a*a <= x){
            main_ans = a;
        }

    }
    return main_ans;
}
int  main(){

    int n ;
    cout<<"enter a number : ";
    cin>>n;
    long long int ans = sqrt(n);
    cout<<"answer is "<<ans<<endl;
    
    cout<<"Precision "<<precision(ans,n)<<endl;




    return 0;
}
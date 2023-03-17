#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long long divide(long long dividend, long long divisor) 
    {
        long long ans = -1;
        
        long long s = 0;
        long long e = abs(dividend);
        
        while(s<=e){
            
            long long mid = s+(e-s)/2;
            
            if(mid* abs(divisor) == abs(dividend)){
                ans = mid;
                break;
            }
            
            else if(mid* abs(divisor) < abs(dividend)){
                ans = mid;
                s = mid+1;
            }
            else{
                e = mid-1;
            }
        }
        
        if((divisor > 0 and dividend > 0) or (divisor<0 and dividend < 0)){
            return ans;
        }
        else{
            return -ans;
        }
    }
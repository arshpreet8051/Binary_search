#include <bits/stdc++.h>
long long sqrt(long long x){

	long long s = 0;
	long long e = x;
	long long ans = -1;

	long long mid = s+(e-s)/2;

    // Simple logic sqare root will lie within range of 0 and given ele

	while(s<=e){
		long long sq = mid*mid;

		if(sq == x){return mid;}

		else if(sq < x){
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

// Function to get square root decimal precision
double precision(long long ans,long long x,int d){

	double a = ans;

	double step = 0.1;

	for(int i = 0;i<d;i++){
		for(double j = a; j*j<=x; j = j+step){
			a = j;
		}
		step = step/10;
	}
	return a;
}
double squareRoot(long long n, int d) 
{	
	long long ans = sqrt(n);
	double a = precision(ans,n,d);
	return a;
}
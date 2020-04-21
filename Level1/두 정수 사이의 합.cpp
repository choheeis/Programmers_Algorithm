#include<iostream>
using namespace std;

long long solution(int a, int b) {
    long long result = 0;
    if(a == b){
		return a;	
	}else if((long)a*(long)b < 0 && a < 0){
		a = a*-1;
		result = -(long)(1 + a)*(long)a/2 + (long)(1 + b)*(long)b/2;
	}else if((long)a*(long)b < 0 && b < 0){
		b = b*-1;
		result = -(long)(1 + b)*(long)b/2 + (long)(1 + a)*(long)a/2;
	}else if(a < 0 && b < 0){
		a = a*-1, b = b*-1;
		if(a>b){
			result = -((long)(1 + a)*(long)a/2 - (long)(1 + b - 1)*(long)(b-1)/2);
		}else{
			result = -((long)(1 + b)*(long)b/2 - (long)(1 + a - 1)*(long)(a-1)/2);
		}
	}else{
		if(a>b){
			result = (long)(1 + a)*(long)a/2 - (long)(1 + b - 1)*(long)(b-1)/2;
		}else{
			result = (long)(1 + b)*(long)b/2 - (long)(1 + a - 1)*(long)(a-1)/2;
		}
	}
    return result;
}

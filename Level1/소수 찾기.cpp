#include<iostream>
#include<vector>
using namespace std;

int solution(int n) {
	vector<int> arr(n+1, 0);
	
	// 에라토스테네스의 채 배열  
	for(int i = 2 ; i <= n ; i++){
		if(arr[i] != -1){
			for(int j = i + i ; j <= n ; j = j + i){
				if(arr[j] != -1){
					arr[j] = -1;
				}
			}
		}
	}
	
	int count = 0;
	for(int i = 2 ; i <= n ; i++){
		if(arr[i] != -1){
			count++;
		}
	}
    
    return count;
}

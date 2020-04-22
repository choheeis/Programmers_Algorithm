#include <string>
#include <vector>
#include<iostream>
#include<algorithm>

using namespace std;

string getBinary(int a, int n){

	string tmp = "";
	if(a == 0){
		for(int i = 0 ; i < n ; i++){
			tmp += '0';
		}
		
		return tmp;
	}
	
    while(a > 1){
        if(a % 2 == 0){
            tmp += '0';
            a = a / 2;
        }else{
            tmp += '1';
            a = a / 2;
        }
    }
    tmp += '1';
    
    string reverseTmp = "";
    for(int i = tmp.size() - 1 ; i >= 0 ; i--){
    	reverseTmp += tmp.at(i);
	}
    
    string result = "";
    if(tmp.size() < n){
        for(int i = 0 ; i < n - tmp.size() ; i++){
            result += '0';
        }
        result += reverseTmp;
    }else{
    	result += reverseTmp;
	}
    
    return result;
}

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> map1(n);
    vector<string> map2(n);
    for(int i = 0 ; i < n ; i++){
        int tmpNum = arr1.at(i);
        map1[i] = getBinary(tmpNum, n);

   	}
   	for(int i = 0 ; i < n ; i++){
        int tmpNum = arr2.at(i);
        map2[i] = getBinary(tmpNum, n);
   	}
    
    vector<string> answer(n);
    for(int i = 0 ; i < n  ; i++){
    	string tmp = ""; 
    	for(int j = 0 ; j < n ; j++){
    		if(map1[i].at(j) == '1' || map2[i].at(j) == '1'){
    			tmp += '#';
			}else{
				tmp += ' ';
			}
		}
		answer[i] = tmp;
	}
    
	return answer;
}

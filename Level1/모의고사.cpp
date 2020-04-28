#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int a, int b){
	if(a > b){
		return true;
	}else{
		return false;
	}
}

vector<int> solution(vector<int> answers) {
	// 1번 수포자 정답 채점  
	int wrongAnswer1 = 0;
	int rightCount[3] = {0};
    for(int i = 0 ; i < answers.size() ; i++){
    	wrongAnswer1++;
    	if(answers.at(i) == wrongAnswer1){
    		rightCount[0]++;
		}
		if(wrongAnswer1 == 5){
			wrongAnswer1 = 0;
		}
	}
	
	// 2번 수포자 정답 채점 
	int wrongAnswer2 = 0;
	for(int i = 0 ; i < answers.size() ; i++){
    	if(i%2 == 0){
    		if(answers.at(i) == 2){
    			rightCount[1]++;		
			}
		} else{
			wrongAnswer2++;
			if(wrongAnswer2 == 2){
				wrongAnswer2++;		
			}
			if(answers.at(i) == wrongAnswer2){
				rightCount[1]++;		
			}
			if(wrongAnswer2 == 5){
				wrongAnswer2 = 0;
			}
		}
	} 
	
	// 3번 수포자 정답 채점  
	for(int i = 0 ; i < answers.size() ; i++){
    	string str = to_string(i);
    	if(str.at(str.size()-1) == '0' || str.at(str.size()-1) == '1'){
    		if(answers.at(i) == 3){
    			rightCount[2]++;		
			}
		}else if(str.at(str.size()-1) == '2' || str.at(str.size()-1) == '3'){
			if(answers.at(i) == 1){
    			rightCount[2]++;			
			}
		}else if(str.at(str.size()-1) == '4' || str.at(str.size()-1) == '5'){
			if(answers.at(i) == 2){
    			rightCount[2]++;			
			}
		}else if(str.at(str.size()-1) == '6' || str.at(str.size()-1) == '7'){
			if(answers.at(i) == 4){
    			rightCount[2]++;			
			}
		}else if(str.at(str.size()-1) == '8' || str.at(str.size()-1) == '9'){
			if(answers.at(i) == 5){
    			rightCount[2]++;				
			}
		}
	}
	
	int max = 0;
	int maxIndex = 0;
	for(int i = 2 ; i >= 0 ; i--){
		if(max <= rightCount[i]){
			max = rightCount[i];
			maxIndex = i;
		}
	}
	
	vector<int> answer;
	answer.push_back(maxIndex+1);
	for(int i = 0 ; i < 3 ; i++){
		if(i == maxIndex){
			continue;
		}else{
			if(max == rightCount[i]){
				answer.push_back(i+1);
			}
		}
	}
	return answer;
}

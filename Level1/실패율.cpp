#include<iostream>
#include<vector>
using namespace std;

vector<int> solution(int N, vector<int> stages) {
	vector<int> arriveCount(N+1);
	vector<int> ingCount(N+1);
	
	// 안 쓰는 인덱스 처리  
	arriveCount[0] = -1;
	ingCount[0] = -1;
	
	for(int i = 1 ; i <= N ; i++){
		for(int j = 0 ; j < stages.size() ; j++){
			if(i < stages.at(j)){
				arriveCount[i]++;
			}else if(i == stages.at(j)){
				ingCount[i]++;
				arriveCount[i]++;
			}
		}
	}
	
	vector<float> failRate(N+1);
	failRate[0] = -1; // 안쓰는 인덱스 처리 
	for(int i = 1 ; i <= N ; i++){
		if(arriveCount[i] == 0){
			// 0으로 나눌 수는 없음  
			failRate[i] = 0;
		}else{
			failRate[i] = (float)ingCount[i] / (float)arriveCount[i];	
		}
		
	} 
	
	vector<int> answer;
	for(int i = 1 ; i <= N ; i++){
		float max = -1;
		int maxIndex = 0;
		for(int j = 1 ; j <= N ; j++){
			if(failRate[j] != -1){
				if(max < failRate[j]){
					max = failRate[j];
					maxIndex = j;
				}	
			}
		}	
		failRate[maxIndex] = -1;
		answer.push_back(maxIndex);
	}
	
	return answer;
	
}

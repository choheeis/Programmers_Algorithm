#include<iostream>
#include<vector>
using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    vector<int> students(n+1, 1); // 인덱스 0은 사용 안함  
    
	// 0인 학생은 잃어버린 사람, 2인 학생은 여분 있는 사람  
    for(int i = 0 ; i < lost.size() ; i++){
    	students[lost.at(i)]--;
	}
	for(int i = 0 ; i < reserve.size() ; i++){
		students[reserve.at(i)]++;
	}
	
	for(int i = 1 ; i <= n ; i++){
		// 여분이 있는 사람 위주로 보고 맨 처음에는 앞 사람한테 준다고 하자. 
		if(students.at(i) == 2){
			if(students.at(i-1) == 0){
				students.at(i)--;
				students.at(i-1)++;
			}else if(i != n && students.at(i+1) == 0){
				students.at(i)--;
				students.at(i+1)++;
			}else{
				continue;
			}
		}
	}
	
	int count = 0;
	for(int i = 1 ; i <= n ; i++){
		if(students.at(i) >= 1){
			count++;
		}
	}
	
	return count;
}

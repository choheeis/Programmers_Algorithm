#include <string>
#include <vector>

using namespace std;

int solution(string dartResult) {
	vector<int> point;
	
	// 숫자만 판별  
	string str = "";
    for(int i = 0 ; i < dartResult.size() ; i++){
    	if(dartResult.at(i) >= '0' && dartResult.at(i) <= '9'){
    		str += dartResult.at(i);
		}else{
			if(dartResult.at(i) == '*' || dartResult.at(i) == '#'){
				continue;
			}
			if(str == "10"){
				point.push_back(stoi(str));	
			}else{
				string tmp = "0";
				tmp += str;
				point.push_back(stoi(tmp));	
			}
			str = "";
		}
		
	}
	
	// S, D, T 만 판별
	int SDTcount = 0;
	for(int i = 0 ; i < dartResult.size() ; i++){
		if(dartResult.at(i) == 'S'){
			SDTcount++;
			if(SDTcount == 1){
				point[0] = point[0];
			}else if(SDTcount == 2){
				point[1] = point[1];
			}else{
				point[2] = point[2];
			}
		}else if(dartResult.at(i) == 'D'){
			SDTcount++;
			if(SDTcount == 1){
				point[0] = point[0]*point[0];
			}else if(SDTcount == 2){
				point[1] = point[1]*point[1];
			}else{
				point[2] = point[2]*point[2];
			}
		}else if(dartResult.at(i) == 'T'){
			SDTcount++;
			if(SDTcount == 1){
				point[0] = point[0]*point[0]*point[0];
			}else if(SDTcount == 2){
				point[1] = point[1]*point[1]*point[1];
			}else{
				point[2] = point[2]*point[2]*point[2];
			}
		}
	}
	
	// 스타상, 아차상만 판별 
	for(int i = 0 ; i < dartResult.size() ; i++){
		if(dartResult.at(i) == '*'){
			if(i == 1 || i == 2){
				point[0] = point[0]*2;
			}else if(i == dartResult.size() - 1){
				point[1] = point[1]*2;
				point[2] = point[2]*2;
			}else{
				point[0] = point[0]*2;
				point[1] = point[1]*2;
			}
		}else if(dartResult.at(i) == '#'){
			if(i == 1 || i == 2){
				point[0] = point[0]*-1;
			}else if(i == dartResult.size() - 1){
				point[2] = point[2]*-1;
			}else{
				point[1] = point[1]*-1;
			}	
		}else{
			continue;
		}
	} 
	
	int totalPoint = 0;
	for(int i = 0 ; i < 3 ; i++){
		totalPoint += point[i];
	}
	
	return totalPoint;
}

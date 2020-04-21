#include <string>
using namespace std;

string solution(string str, int n) {
	string answer = "";
	for(int i = 0 ; i < str.size() ; i++){
		if(str.at(i) == ' '){
			answer += " ";
			continue;
		}
		if(str.at(i) >= 'a' && str.at(i) <= 'z'){
			// 소문자일 경우 
			if(str.at(i) == 'z') {
				answer += 'a' + n - 1; 
			}else{
				if(str.at(i) + n > 'z'){ 
					int tmp = n - ('z' - str.at(i));
					answer += 'a' + tmp - 1;
				}else{
					answer += str.at(i) + n;
				}
			}
		}else{
			// 대문자일 경우   
			if(str.at(i) == 'Z') {
				answer += 'A' + n - 1;
			}else{
				if(str.at(i) + n > 'Z'){ 
					int tmp = n - ('Z' - str.at(i));
					answer += 'A' + tmp - 1;
				}else{
					answer += str.at(i) + n;
				}
			}
		}
		
	}
    
    return answer;
}


#include <string>
#include<iostream>
using namespace std;

string solution(string s) {
	int k = 0;
	string answer = "";
	for(int i = 0 ; i < s.size() ; i++){
		if(s.at(i) == ' '){
			k = 0;
			answer += " ";
		}else{
			if(k % 2 == 0){
				if(s.at(i) >= 'a' && s.at(i) <= 'z'){
					answer += s.at(i) - 32;
				}else{
					answer += s.at(i);
				}	
				k++;
			}else{
				if(s.at(i) >= 'A' && s.at(i) <= 'Z'){
					answer += s.at(i) + 32;
				}else{
					answer += s.at(i);
				}
				k++;
			}
			
		}
	} 
    
    return answer;
}

int main(){
	string str = "try hello world";
	string result = solution(str);
	cout<<result;
}

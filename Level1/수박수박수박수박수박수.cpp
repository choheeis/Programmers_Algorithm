#include <string>
using namespace std;

string solution(int n) {
    string answer = "";
    for(int i = 1 ; i <= n ; i++){
    	if(i%2 == 0){
    		// i가 짝수일 경우 
			answer += "박"; 
		}else{
			// i가 홀수일 경우 
			answer += "수"; 
		}
	}
    return answer;
}

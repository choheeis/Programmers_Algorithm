#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
	string str = to_string(x);
	int eachSum = 0;
    int answer = 0;
	for(int i = 0 ; i < str.size() ; i++){
		eachSum += str.at(i) - 48;
	}
	if(x % eachSum == 0){
		answer = true;
	}else{
		answer = false;
	}
    return answer;
}

#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    int countForFour = phone_number.size() - 4;
    for(int i = 0 ; i < countForFour ; i++){
    	answer += "*";
	} 
	for(int i = countForFour ; i < countForFour + 4 ; i++){
		answer += phone_number.at(i);
	}
    return answer;
}

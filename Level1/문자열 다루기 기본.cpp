#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
	if(s.size() == 4 || s.size() == 6){
		for(int i = 0 ; i < s.size() ; i++){
			if(!(s.at(i) >= '0' && s.at(i) <= '9')){
				return false; 
			}
		}
		return true;
	} 
	// 길이가 4도 아니고 6도 아닐 경우  
    return false;
}

#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
	string str = to_string(n); 
    vector<int> answer;
    
    for(int i = str.size() - 1 ; i >= 0 ; i--){
    	answer.push_back(str.at(i) - 48);
	}
    return answer;
}

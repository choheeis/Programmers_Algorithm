#include <string>
#include <vector>
#include <algorithm>
using namespace std;


long long solution(long long n) {
	string str = to_string(n);
	sort(str.begin(), str.end());
	string reverseStr = "";
	for(int i = str.size() - 1; i >= 0 ; i--){
		reverseStr += str.at(i);
	}
    long long answer = stoll(reverseStr);
    return answer;
}

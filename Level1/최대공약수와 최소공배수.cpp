
#include <vector>

using namespace std;

int gcd(int a, int b){
	int min, result;
	min = (a<b)?a:b;

	for(int i = 1 ; i <= min ; i++){
		if(a%i == 0 && b%i == 0){
			result = i;
		}
	}	
	return result;
}

int lcm(int a, int b){
	int max, result;
	max = (a>b)?a:b;
	
	for(int i = max ;; i++){
		if(i%a == 0 && i%b == 0){
			result = i;
			break;
		}
	}
	return result;
}

vector<int> solution(int n, int m) {
    vector<int> answer;
    
    answer.push_back(gcd(n, m));
    answer.push_back(lcm(n, m));
    return answer;
}

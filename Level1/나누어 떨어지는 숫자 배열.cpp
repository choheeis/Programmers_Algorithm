#include <vector>
#include<algorithm>
using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
	
	bool nothing = true;
	for(int i = 0 ; i < arr.size() ; i++){
		if(arr[i] % divisor == 0){
			nothing = false;
			answer.push_back(arr[i]);
		}
	}
	if(nothing == true){
		answer.push_back(-1);
		return answer;
	}else{
		sort(answer.begin(), answer.end());
		return answer;
	}
}

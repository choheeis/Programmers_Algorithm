#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> heights) {
	vector<int> answer;
	bool isResponse = false;
    for(int i = heights.size()-1 ; i >= 0 ; i--){
    	int currentTopHeight = heights.at(i); // 4
    	if(i == 0){
    		answer.push_back(0);
    		continue;
		}
    	for(int j = i-1 ; j >= 0 ; j--){
    		int tmpTopHeight = heights.at(j); // 7
    		if(currentTopHeight < tmpTopHeight){
    			answer.push_back(j+1);
    			isResponse = true;
    			break;	
			}else{
				isResponse = false;
				continue;
			}
		}
		if(isResponse == false){
			answer.push_back(0);
		}
	}
	
	reverse(answer.begin(), answer.end());
	return answer;
}

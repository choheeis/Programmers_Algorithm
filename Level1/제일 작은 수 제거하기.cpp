#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
	int min = arr.at(0);
	int minIndex = 0;
	for(int i = 1 ; i < arr.size() ; i++){
		if(min > arr.at(i)){
			min = arr.at(i);
			minIndex = i;
		}
	}
	arr.erase(arr.begin() + minIndex);
    if(arr.empty() == true){
    	arr.push_back(-1);
	}
	return arr;
}

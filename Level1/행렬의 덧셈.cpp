#include <vector>
using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    int arrHeightSize = arr1[0].size();
    int arrWidthSize = arr1.size();
    vector<vector<int>> answer(arrWidthSize, vector<int>(arrHeightSize));
    
	for(int i = 0 ; i < arrWidthSize ; i++){
		for(int j = 0 ; j < arrHeightSize ; j++){
			int sum = 0;
			sum = arr1[i][j] + arr2[i][j];
			answer[i][j] = sum;
		}
	} 
    return answer;
}

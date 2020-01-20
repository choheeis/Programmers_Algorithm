#include <vector>
using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> result;
    int tmp = -1;
    for(int i = 0 ; i < arr.size() ; i++){
		if(tmp != arr[i]){
			tmp = arr[i];
			result.push_back(arr[i]);
		}
	}
    return result;
}

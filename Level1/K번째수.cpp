//뭔가 채점이 잘못되었다! 채점을 하면 이상하다.. 
#include <vector>
#include<algorithm>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> result;
    	for(int i = 0 ; i < commands.size() ; i++){
		    if(commands[i][0] == commands[i][1]){
			    result.push_back(array[commands[i][0] - 1]);
		    }else{
			    sort(array.begin() - 1 + commands[i][0], array.begin() + commands[i][1]); 
			    result.push_back(array[commands[i][0] + commands[i][2] - 2]);
		    }
	    }
    return result;
}

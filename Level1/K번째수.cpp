#include <vector>
#include<algorithm>
using namespace std;

vector<int> solution(vector<int> input, vector<vector<int>> commands) {
    vector<int> result;
    	for(int i = 0 ; i < commands.size() ; i++){
            vector<int> array = input;
		    if(commands[i][0] == commands[i][1]){
			    result.push_back(array[commands[i][0] - 1]);
		    }else{
			    sort(array.begin() - 1 + commands[i][0], array.begin() + commands[i][1]); 
			    result.push_back(array[commands[i][0] + commands[i][2] - 2]);
		    }
	    }
    return result;
}

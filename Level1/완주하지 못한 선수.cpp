#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());
    
    string answer = "";
    for(int i = 0 ; i < completion.size() ; i++){
    	if(participant.at(i) != completion.at(i)){
			answer = participant.at(i);
			cout<<answer;
			return answer;
		}
		if(i == completion.size() - 1){
			answer = participant.at(i+1);
			cout<<answer;
			return answer;
		}		
	}
	
}

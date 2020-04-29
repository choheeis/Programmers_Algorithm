#include<iostream> 
#include<string>
#include<vector>
#include<stack>
using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
	int size = board.at(0).size();
	
	stack<int> s;
	vector<stack<int>> box(size, s);
	
	// 기계 배열을 세로 기준으로 다시 만들자. 
	for(int i = 0 ; i < size ; i++){
		for(int j = size - 1 ; j >= 0 ; j--){
			if(board[j][i] == 0){
				continue;
			}else{
				box[i].push(board[j][i]);	
			}
			
		}
	}
	

	// 배열의 맨 끝 원소 뽑고 지우자.  
	stack<int> picks;
	int count = 0;
	for(int i = 0 ; i < moves.size() ; i++){
		if(box[moves.at(i) - 1].empty() == true){
			continue;
		}else{
			int doll = box[moves.at(i) - 1].top();
			
			box[moves.at(i) - 1].pop();
			if(picks.empty() == true){
				picks.push(doll);	
			}else{
				if(picks.top() == doll){
					count++;
					picks.pop();
				}else{
					picks.push(doll);
				}
			}	
		}
		
	}
	return count*2;

}

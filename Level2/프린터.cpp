#include<iostream>
#include<queue>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;

bool compare(int a, int b){
	if(a > b){
		return true;
	}else{
		return false;
	}
}

int solution(vector<int> priorities, int location) {
    int answer = 0;
    
    // 우선순위 큐에 입력.  
    queue<pair<int,int>> mQueue;
    pair<int, int> p;
    vector<int> mVec;
    for(int i = 0 ; i < priorities.size() ; i++){
    	p = make_pair(priorities.at(i), i); //first = 값, second = 위치  
    	mVec.push_back(p.first);
    	mQueue.push(p);
	}
	sort(mVec.begin(), mVec.end(), compare);
	
	int order = 0, i = 0;
	while(mQueue.empty() == false){
		int currentLocation = mQueue.front().second;
		int frontValue = mQueue.front().first;
		if(frontValue == mVec[i]){
			i++;
			order++;
			mQueue.pop();
			if(currentLocation == location){
				return order;
			}
		}else{
			pair<int,int> tmp = mQueue.front();
			mQueue.pop();
			mQueue.push(tmp);
		}	
	}
}

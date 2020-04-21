#include<iostream>
#include <string>
#include <vector>
#include<algorithm>
using namespace std;

int index;

bool compare(string a, string b){
	if(a.at(index) == b.at(index)){
		return a <= b;
	}else if(a.at(index) < b.at(index)){
		return true;
	}else{
		return false;
	}
}

vector<string> solution(vector<string> strings, int n) {
	index = n;
	sort(strings.begin(), strings.end(), compare);	
    return strings;
}

#include<string>
#include<iostream>
using namespace std;

int main(){
	string s = "Pyy";
	int count_p = 0;
	int count_y = 0;
	for(int i = 0 ; i < s.length() ; i++){
		if(s.at(i) == 'p' || s.at(i) == 'P'){
			count_p++;
		}else if(s.at(i) == 'y' || s.at(i) == 'Y'){
			count_y++;
		}
	}
	if(count_p == count_y){
		cout<<"true";
	}else{
		cout<<"false";
	}
} 

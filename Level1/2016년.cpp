#include <string>
using namespace std;

string solution(int a, int b) {
    int totalDate[13] = {0};
	for(int i = 1 ; i < 13 ; i++){
		if(i == 1){
			totalDate[1] = 31;
		}else if(i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12){
			totalDate[i] = totalDate[i-1] + 31;
		}else if(i == 2){
			totalDate[i] = totalDate[i-1] + 29;
		}else{
			totalDate[i] = totalDate[i-1] + 30;
		}
	}
    
    int sumDay = totalDate[a-1] + b;
	int result = 0;
	if(sumDay < 4){
		result = sumDay + 4;
	}else{
		result = (sumDay - 3) % 7;
	}
    string day;

	if(result == 1){
		day = "MON";
	}else if(result == 2){
		day = "TUE";
	}else if(result == 3){
		day = "WED";
	}else if(result == 4){
		day = "THU";
	}else if(result == 5){
		day = "FRI";
	}else if(result == 6){
		day = "SAT";
	}else{
		day = "SON";
	}
    return day;
}

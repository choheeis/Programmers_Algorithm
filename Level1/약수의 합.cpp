
using namespace std;

int solution(int n) {
	int answer = 1;
    if(n == 1){
        return answer;
    }else if(n == 0){
        return 0;
    }else{
        for(int i = 2 ; i <= n ; i++){
		    if(n % i == 0){
			    answer += i;
		    }
	    }   
        return answer;
    }
}

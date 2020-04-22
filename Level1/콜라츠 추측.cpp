
using namespace std;

int solution(int num) {
    int count = 0;
    long long tmp = (long long)num;
    while(tmp != 1){
    	count++;
    	if(count > 500){
    		return -1;
		}else{
			if(tmp % 2 == 0){
				tmp = tmp/2;
			}else{
				tmp = tmp*3 + 1;
			}
		}
	}
    return count;
}

#include <iostream>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
    int sum = 0;
    int count = 0;
    
    // 가장 작은 금액을 지원한 곳부터 주기 위함 
    sort(d.begin(), d.end());
    for(int i = 0 ; i < d.size() ; i++){
        sum += d.at(i);
        if(sum > budget){
            break;
        }else{
            count++;    
        }
    }
    return count;
}

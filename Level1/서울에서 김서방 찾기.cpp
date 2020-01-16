#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    for(int i = 0 ; i < seoul.size() ; i++){
        if(seoul[i] == "Kim"){
            string index = to_string(i);
            string s1 = "김서방은 ";
            string s2 = "에 있다";
            string answer = (s1.append(index)).append(s2);
            return answer;
        }
    } 
}

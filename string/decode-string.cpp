class Solution {
public:
    string decodeString(string s) {
        stack<int> count; // 统计次数
        stack<string> result; 
        string current;
        int k = 0;
        for(auto& c : s){
            if(isdigit(c)){
                k = k*10 + (c - '0');
            }
            else if(c == '['){
                count.push(k);
                result.push(current);
                current = "";
                k = 0;
            }
            else if(c == ']'){
                int repeat = count.top();
                count.pop();
                string tmp = result.top();
                result.pop();
                while(repeat--){
                    tmp +=cureent;
                }
                current = tmp;
            }
            else{
                current += c;
            }
        }
        return current;
    }
};
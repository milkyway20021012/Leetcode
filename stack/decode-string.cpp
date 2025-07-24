class Solution {
public:
    string decodeString(string s) {
        stack<int> count; // 统计次数
        stack<string> result; 
        string current;
        int k = 0;
        for(auto& c : s){
            if(isdigit(c)){
                k = k*10 + (c - '0'); // 將字符串的數字轉成整樹
            }
            else if(c == '['){
                count.push(k);
                result.push(current); // 可能以字母開始 所以要先把[ 前面的結果先push進去
                current = ""; // 置空 => 準備處理[]中的內容
                k = 0;
            }
            else if(c == ']'){
                int repeat = count.top(); // 獲取次數
                count.pop();
                string tmp = result.top(); // 獲取目前以拼接完的字串
                result.pop();
                while(repeat--){
                    tmp +=current; // 假如ef開始 ef3[a] => ef + a + a + a
                }
                current = tmp; 
                // 將tmp的結果(拼接結果)給cureent(目前拼接結果) => 會在下一輪 c =='[' 被push到result 
            }
            else{
                current += c; // 處理[]中內容 和不是[]中的字母
            }
        }
        return current;
    }
};
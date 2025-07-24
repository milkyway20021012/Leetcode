class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // 暴力美學
        vector<pair<int,int>> v;
        int i,j;
        for(i = 0,j=0;i<numbers.size();){
            if(numbers[i] + numbers[j] == target){
                break;
            }
            j = (j == numbers.size()-1) ? 0 : j+1;
            cout << j << endl;
            
        }
        return {i,j};
    }
};
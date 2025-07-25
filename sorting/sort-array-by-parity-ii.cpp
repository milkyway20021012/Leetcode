class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> even;
        vector<int> odd;

        for(auto e : nums){
            if(e % 2 == 0){
                even.push_back(e);
            }
            else{
                odd.push_back(e);
            }
        }
        int i,j,k;
        for(i = 0,j = 0 ,k = 0; i < nums.size();++i){
            if(i%2==0){
                nums[i] = even[j++];
            }
            else{
                nums[i] = odd[k++];
            }
        }
        return nums;
    }
};
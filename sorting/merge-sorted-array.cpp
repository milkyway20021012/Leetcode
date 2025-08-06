class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int n1 = 0,n2=0;
        while(n1 < nums1.size() && n2 < nums2.size()){
            if(nums1[n1] != 0 && nums1[n1] <= nums2[n2]) ++n1;
            else if(nums1[n1] == 0){
                nums1[n1] = nums2[n2++];
            }
            else{
                ++n1;
                nums1[n1] = nums1[n1-1];
                nums1[n1 - 1] = nums2[n2++];
            }

        }
        if(m == 0){
            for(int i = 0;i<nums1.size();++i){
                nums1[i] = nums2[i];
            }
        }
    }
};
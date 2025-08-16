class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int left = 0,right = arr.size() - 1;
        while(left <right){
            int mid = (left + right + 1) / 2;
            // 嚴格遞減
            if(arr[mid] < arr[mid -1]){
                right = mid -1;
            }
            // 嚴格遞增
            else{
                left = mid;
            }
        }
        return left;
    }
};
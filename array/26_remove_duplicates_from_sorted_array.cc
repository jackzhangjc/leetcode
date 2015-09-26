class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = -1;
        int j = 0;
        while (j < nums.size()){
            while ((j < nums.size() -1) && (nums[j+1] == nums[j])) j++;
            i++;
            nums[i] = nums[j];
            j++;
        }
        return i+1;
    }
};
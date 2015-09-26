class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if (nums.size() < 2) return;
        int x = nums.size()-2;
        while (x >= 0 && nums[x] >= nums[x+1]) x--;
        if (x >= 0){
            int y;
            for (y = nums.size()-1; y > x; y--){
                if (nums[y] > nums[x]) break;
            }
            int t = nums[x];
            nums[x] = nums[y];
            nums[y] = t;
        }
        x++;
        for (int i = x; i < ((nums.size() - x) /2) + x; i++){
            int t = nums[i];
            nums[i] = nums[nums.size() - i + x - 1 ];
            nums[nums.size() - i + x - 1] = t;
        }
        
    }
};
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int result = 0;
        unordered_set<int> s;
        for (int i = 0; i < nums.size(); i++){
            s.insert(nums[i]);
        }
        for (int i = 0; i < nums.size(); i++){
            int c = 1;
            int v = nums[i];
            s.erase(v);
            while (s.count(v-1)){
                c++;
                v--;
                s.erase(v);
            }
            v = nums[i];
            while (s.count(v + 1)){
                v++;
                c++;
                s.erase(v);
            }
            result = max(result, c);
        }
        return result;
    }
};
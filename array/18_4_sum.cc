class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        unordered_map<int, vector<pair<int, int>>> m;
        vector<vector<int>> result;
        if (nums.size() < 4) return result;
        for (int i = 0; i < nums.size(); i++){
            for (int j = i + 1; j< nums.size(); j++){
                pair<int, int> newpair;
                newpair = make_pair(i, j);
                m[nums[i] + nums[j]].push_back(newpair);
            }
        }
        
        for (int i = 0; i < nums.size(); i++){
            for (int j = i + 1; j < nums.size(); j++){
                int t = target - nums[i] - nums[j];
                if (m.count(t) > 0){
                    vector<pair<int, int>> temp = m[t];
                    for (int k = 0; k < temp.size(); k++){
                        if (j < temp[k].first) {
                            result.push_back({nums[i], nums[j], nums[temp[k].first], nums[temp[k].second]});
                        }
                        
                    }
                }
            }
        }
        sort(result.begin(), result.end());
        result.erase(unique(result.begin(), result.end()), result.end());
        return result;
    }
};
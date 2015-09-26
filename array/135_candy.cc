class Solution {
public:
    int candy(vector<int>& ratings) {
        int sol = 0;
        vector<int> f(ratings.size(), 1);
        for (int i = 1; i < ratings.size(); i++){
            if (ratings[i] > ratings[i -1] && f[i] <= f[i - 1]) f[i] = f[i - 1] + 1;
        }
        for (int i = ratings.size() - 2; i >= 0; i--){
            if (ratings[i] > ratings[i + 1] && f[i] <= f[i + 1]) {
                f[i] = f[i + 1] + 1;
            }
        }
        
        for (int i = 0; i < ratings.size(); i++){
            sol += f[i];
        }
        return sol;
    }
};
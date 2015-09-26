class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> r;

        r.push_back(0);
        if (n < 1) return r;
        int f = 1;
        for (int i = 1; i <= n; i++){
            for (int j = r.size() - 1; j >= 0; j--){
                r.push_back(r[j]);
            }
            for (int j = r.size()/2; j < r.size(); j++){
                r[j] = r[j] + f;
            }
            f = f * 2;
        }
        return r;
    }
};
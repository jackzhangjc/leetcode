class Solution {
public:
    int singleNumber(vector<int>& A) {
        int a = 0;
        for (int i = 0; i < A.size(); i++)
            a ^= A[i];
        return a;
    }
};
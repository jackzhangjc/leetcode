#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int len = height.size();
        int left[len];
        int right[len];
        if (len < 1) return 0;
        left[0] = height[0];
        right[len - 1] = height[len - 1];
        int count = 0;
        for (int i = 1; i < len; i++){
            left[i] = max(left[i - 1], height[i]);
        }
        for (int i = len - 2; i >= 0; i--){
            right[i] = max(right[i + 1], height[i]);
        }
        
        for (int i = 1; i < len -1; i++){
            int m = min(left[i - 1], right[i + 1]);
            if (m > height[i]) count = count + m - height[i];
        }
        return count;
    }
};

int main(){
    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    Solution solution;
    cout<< solution.trap(a)<<endl;
    return 0;
}
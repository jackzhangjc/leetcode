#include <iostream>
#include <vector>

using namespace std;

    int minSubArrayLen(int s, vector<int>& nums) {
        int start = 0;
        int end = 0;
        if (nums.size()>0){
        int sum = nums[0];
        int min = 1000000;
        while (end < nums.size()) {
            cout << sum << ' ' << start << ' ' << end << endl;
            if (sum < s){
                end++;
                sum += nums[end];
            } else if (sum >=s){
                if (min > (1+ end - start)) {
                    min = 1 + end - start;
                }
                sum = sum - nums[start];
                start++;
            }
        }
        if (min == 1000000) { min = 0;}
        return min;
        }
         else return 0;
    }

int main() {

    vector<int> num;
    num.push_back(1);
    num.push_back(4);
    num.push_back(4);
    cout << minSubArrayLen(4, num) << endl;
    return 0;
}


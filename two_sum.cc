#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> twoSum(vector <int>& nums, int target){
    vector<int> temp = nums;
    sort(temp.begin(), temp.end());
    int i = 0;
    int j = temp.size()-1;
    while ((temp[i] + temp[j]) != target){
        if ((temp[i] + temp[j]) < target) {
            i++;
        } else j--;
    }
    int a = temp[i];
    int b = temp[j];
    cout<<a<<" "<<b;
    vector<int> result;
    for (int k = 0; k < nums.size(); k++){
        if ((a == nums[k]) || (b == nums[k])) {
            result.push_back(k);
        }
    }
    return result;
}    

int main(){
    vector<int> input;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++){
        int t = 0;
        cin>>t;
        input.push_back(t);
    }
    int target = 0;
    cin>>target;
    vector<int> result = twoSum(input, target);
    for (int i = 0; i < result.size(); i++){
        cout<<result[i]+1<<" ";
    }
}

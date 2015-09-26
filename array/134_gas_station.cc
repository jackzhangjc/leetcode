class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int s = 0;
        int c = 0;
        int p = 0;
        for (int i = 0; i < gas.size(); i++){
            s = s + gas[i] - cost[i];
            c = c + gas[i] - cost[i];
            if (c < 0){
                c = 0;
                p = i + 1;
            }
        }
        
        if (s < 0) return -1;
        else return p;
    }
};
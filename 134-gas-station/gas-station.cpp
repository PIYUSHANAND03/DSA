class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int total_gas=0;
        int total_cost=0;
        int curr_gas=0;
        int start=0;
        for(int i=0;i<gas.size();i++){
            total_gas=total_gas+gas[i];
            total_cost=total_cost+cost[i];
        }
        if(total_gas<total_cost){
            return -1;
        }
        for(int i=0;i<gas.size();i++){
            curr_gas=curr_gas+(gas[i]-cost[i]);
            if(curr_gas<0){
                start=i+1;
                curr_gas=0;
            }
        }
        return start;
    }
};
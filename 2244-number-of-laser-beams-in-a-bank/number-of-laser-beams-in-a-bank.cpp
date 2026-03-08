class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int prev=0;
        int result=0;
        for(int i=0;i<bank.size();i++){
            int current=0;
            for(int j=0;j<bank[i].size();j++){
                if(bank[i][j]=='1'){
                    current++;
                }
            }
            result=result+(current*prev);
            if(current!=0){
                prev=current;
            }
        }
        return result;
    }
};
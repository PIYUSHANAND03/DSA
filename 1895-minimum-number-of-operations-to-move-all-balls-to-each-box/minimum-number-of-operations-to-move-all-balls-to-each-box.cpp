class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int>answer(boxes.size());
        for(int i=0;i<boxes.size();i++){
            for(int j=0;j<boxes.size();j++){
                if(boxes[i]=='1'){
                    answer[j]=answer[j]+abs(j-i);
                }
            }
        }
        return answer;
    }
};
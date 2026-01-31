class Solution {
public:
    bool checkIfPangram(string sentence) {
        int count=0;
        for(int i=97;i<=122;i++){
            for(int j=0;j<sentence.size();j++){
                if(i==sentence[j]){
                    count++;
                    break;
                }
            }
        }
        if(count==26){
            return true;
        }
        else{
            return false;
        }
    }
};
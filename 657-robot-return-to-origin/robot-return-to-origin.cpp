class Solution {
public:
    bool judgeCircle(string moves) {
        int ans1=0,ans2=0;
        for(int i=0;i<moves.size();i++){
            if(moves[i]=='U'){
                ans1++;
            }
            if(moves[i]=='D'){
                ans1--;
            }
            if(moves[i]=='R'){
                ans2++;
            }
            if(moves[i]=='L'){
                ans2--;
            }
        }
        if(ans1==0 && ans2==0){
            return true;
        }
        else{
            return false;
        }
    }
};
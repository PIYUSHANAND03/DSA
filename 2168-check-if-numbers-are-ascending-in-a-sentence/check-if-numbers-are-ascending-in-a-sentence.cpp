class Solution {
public:
    bool areNumbersAscending(string s) {
        vector<int>ans;
        int x=0;
        bool check=false;
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i])){
                x=x*10+(s[i]-'0');
                check=true;
            }
            else if(check){
                ans.push_back(x);
                x=0;
                check=false;
            }
        }
        if(check){
            ans.push_back(x);
            check=false;
        }
        for(int j=0;j<ans.size()-1;j++){
            if(ans[j]>=ans[j+1]){
                return false;
            }
        }
        return true;
    }
};
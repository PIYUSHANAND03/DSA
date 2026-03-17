class Solution {
public:
    string removeStars(string s) {
        stack<char>ans;
        for(int i=0;i<s.size();i++){
            if(s[i]!='*'){
                ans.push(s[i]);
            }
            else{
                if(!ans.empty()){
                    ans.pop();
                }
            }
        }
        string final_ans="";
        while(!ans.empty()){
            final_ans.push_back(ans.top());
            ans.pop();
        }
        reverse(final_ans.begin(),final_ans.end());
        return final_ans;
    }
};
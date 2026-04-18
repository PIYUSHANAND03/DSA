class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int>ans;
        int count=0;
        for(int i=0;i<s.size();i++){
            int value=0;
            if(s[i]=='('){
                ans.push(0);
            }
            else{
                while(ans.top()!=0){
                    value=value+ans.top();
                    ans.pop();
                }
                ans.pop();
                ans.push(max(2*value,1));
            }
        }
        while(!ans.empty()){
            count=count+ans.top();
            ans.pop();
        }
        return count;
    }
};
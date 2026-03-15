class Solution {
public:
    int minSwaps(string s) {
        stack<char>ans;
        for(int i=0;i<s.size();i++){
            if(s[i]=='['){
                ans.push(s[i]);
            }
            else if(!ans.empty()){
                ans.pop();
            }
        }
        return (ans.size()+1)/2;
    }
};
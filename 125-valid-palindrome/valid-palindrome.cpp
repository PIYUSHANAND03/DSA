class Solution {
public:
    bool isPalindrome(string s) {
        if(s.size()==0){
            return true;
        }
        vector<char>ans;
        for(int i=0;i<s.size();i++){
            if ((s[i] >= '0' && s[i] <= '9') ||
                (s[i] >= 'A' && s[i] <= 'Z') ||
                (s[i] >= 'a' && s[i] <= 'z')){
                ans.push_back(tolower(s[i]));
            }
        }
        int left=0;
        int right=ans.size()-1;
        while(left<right){
            if(ans[left]!=ans[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
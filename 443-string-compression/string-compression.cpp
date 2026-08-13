class Solution {
public:
    int compress(vector<char>& chars) {
        vector<char>ans;
        int count=1;
        for(int i=0;i<chars.size()-1;i++){
            if(chars[i]==chars[i+1]){
                count++;
            }
            else{
                ans.push_back(chars[i]);
                if(count>1){
                    string num=to_string(count);
                    ans.insert(ans.end(), num.begin(), num.end());
                }
                count=1;
            }
        }
        ans.push_back(chars.back());
        if(count>1){
            string num=to_string(count);
            ans.insert(ans.end(), num.begin(), num.end());
        }
        chars=ans;
        return chars.size();
    }
};
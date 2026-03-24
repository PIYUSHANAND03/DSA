class Solution {
public:
    string simplifyPath(string path) {
        stack<string>ans;
        string result;
        for(int i=0;i<path.size();i++){
            if(path[i]=='/'){
                continue;
            }
            string temp;
            while(i<path.size() && path[i]!='/'){
                temp=temp+path[i];
                i++;
            }
            if(temp=="."){
                continue;
            }
            else if(temp==".."){
                if(!ans.empty()){
                    ans.pop();
                }
            }
            else{
                ans.push(temp);
            }
        }
        while(!ans.empty()){
            result='/'+ans.top()+result;
            ans.pop();
        }
        if(result.size()==0){
            return "/";
        }
        else{
            return result;
        }
    }
};
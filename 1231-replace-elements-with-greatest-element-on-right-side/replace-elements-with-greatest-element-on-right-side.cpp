class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int>ans(arr.size());
        if(arr.size()==1){
            ans[0]=-1;
            return ans;
        }
        for(int i=0;i<arr.size()-1;i++){
            int maxi=arr[i+1];  
            for(int j=i+1;j<arr.size();j++){
                maxi=max(maxi,arr[j]);
            }
            ans[i]=maxi;
        }
        ans[arr.size()-1]=-1;
        return ans;
    }
};
class Solution {
public:
    int longestCommonPrefix(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<string>s;
        int maxi=0;
        int n=nums1.size();
        for(int i=0;i<n;i++){
            string prefix="";
            string p=to_string(nums1[i]);
            for(char c:p){
                prefix +=c;
                s.insert(prefix);
            }
        }
        int m=nums2.size();
        for(int i=0;i<m;i++){
          string q=to_string(nums2[i]);
          string prefix="";
          for(int j=0;j<q.size();j++){
            prefix +=q[j];
            if(s.count(prefix)){
                maxi=max(maxi,j+1);
            }else{
                break;
            }
          }
        }
        return maxi;
    }
};
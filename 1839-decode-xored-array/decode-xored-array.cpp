class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int>arr;
        int ans=0;
        arr.push_back(first);
        for(int i=0;i<encoded.size();i++){
           ans=encoded[i]^arr[i];
           arr.push_back(ans); 
        }
        return arr;
    }
};
class Solution {
public:
    vector<int> factor(int x){
        vector<int> v;
        for(int i=2;i*i<=x;i++){
            if(x%i==0){
                v.push_back(i);
                while(x%i==0){
                    x/=i;
                }
            }
        }
        if(x>1) v.push_back(x);
        return v;
    }
    int minJumps(vector<int>& nums) {
        int n = nums.size();
        map<int,vector<int>> mp;
        for(int i=0;i<n;i++){
            vector<int> v = factor(nums[i]);
            for(auto it : v){
                mp[it].push_back(i);
            }
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,             greater<pair<int,int>>> pq;
        vector<int> vis(n,0);
        pq.push({0,0});
        vis[0] = 1;
        while(!pq.empty()){
            int steps = pq.top().first;
            int node = pq.top().second;
            pq.pop();
            if(node == n-1){
                return steps;
            }
            if(node-1>=0 && !vis[node-1]){
                vis[node-1] = 1;
                pq.push({steps+1,node-1});
            }
            if(node+1<n && !vis[node+1]){
                vis[node+1] = 1;
                pq.push({steps+1,node+1});
            }
            for(auto it : mp[nums[node]]){
                if(!vis[it]){
                    vis[it] = 1;
                    pq.push({steps+1,it});
                }
            }
            mp[nums[node]].clear();
        }
        return -1;
    }
};
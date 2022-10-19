class Solution {
public:
   static bool cmp(pair<string, int>&a, pair<string, int>&b){
        if(a.second==b.second){
            return a.first<b.first;
        }
        return a.second>b.second;
    }
    
    
    vector<string> topKFrequent(vector<string>& words, int k) {
        vector<string>ans;
        unordered_map<string, int>m;
        for(int i=0; i<words.size(); i++){
            m[words[i]]++;
        }
        
        vector<pair<string, int>>v;
        
        for(auto it:m){
            v.push_back(make_pair(it.first, it.second));
        }
        sort(v.begin(), v.end(), cmp);
        for(int i=0; i<k;i++){
            ans.push_back(v[i].first);
        }
        return ans;
    }
};
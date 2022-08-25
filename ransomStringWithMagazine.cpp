class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>mp;
        for(auto it:magazine)
        {
            mp[it]++;
        }
        for(auto ch:ransomNote)
        {
            mp[ch]--;
        }
        
        for(int i=0;i<mp.size();i++)
        {
            if(mp[i]<0)return false;
        }
        return true;
    }
};
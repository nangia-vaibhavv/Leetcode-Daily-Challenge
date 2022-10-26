class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0;
//         for(int i=0;i<n;i++)
//         {
//             for(int j=i+1;j<n;j++)
//             {
                
//             }
//         }
        unordered_map<int,int>mp;
        mp[0]=-1;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            if(k)sum%=k;
            if(mp.find(sum) != mp.end() && abs(i-mp[sum])>1) return 1;
            if(mp.find(sum) == mp.end()) mp[sum]=i;
        }
        return 0;
    }
};
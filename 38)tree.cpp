class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
         int f=INT_MAX,s=INT_MAX;
        for(int val: nums)
        {
            if(val>s)
            {
                return true;
            }
            else if(val > f && val < s)
            {
                s=val;
            }
            else if(val < f)
            {
                f=val;
            }
        }
        return false;
    }
};
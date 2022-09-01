class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        int n=stations.size();
        vector<long long >dp(n+1,0);
//         dp[i] denotes max distance travelled with using i fuelstops
        
        dp[0]=startFuel;
        
//         starting using 1 fuel stop as case for 0 fuel stop iss already taken
        for(int i=1;i<n+1;i++)
        {
            for(int j=i;j>=0;j--)
            {
//                 check if it can actually reach to that fuel stop
                if(dp[j]>=stations[i-1][0])
                {
                    dp[j+1]=max(dp[j+1],dp[j]+stations[i-1][1]);
                }
            }
        }
        for(int j = 0; j<n+1; j++) {
            if(dp[j] >= target)
                return j;
        }
        return -1;
    }
};
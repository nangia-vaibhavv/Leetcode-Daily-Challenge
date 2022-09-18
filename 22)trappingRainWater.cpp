class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int left=0,right=n-1,maxLeft=0,maxRight=0,res=0;
        while(left<=right)
        {
            if(height[left]<=height[right])
            {
                if(height[left]>maxLeft)
                {
                    maxLeft=height[left];
                }
                else
                {
                    res+=maxLeft-height[left];
                }
                left++;
            }
            else{
                if(height[right]>=maxRight)
                {
                    maxRight=height[right];
                }
                else
                {
                    res+=maxRight-height[right];
                }
                right--;
            }
        }
            return res;
        
        
        
        // int n=height.size();
        // int waterTrapped=0;
        // for(int i=0;i<n;i++)
        // {
        //     int maxLeft=0,maxRight=0, left=0,right=n-1;
        //     int j=i;
        //     while(j>=0)
        //     {
        //        maxLeft=max(maxLeft,height[j]);
        //         j--;
        //     }
        //     j=i;
        //     while(j<=n)
        //     {
        //         maxRight=max(maxRight,height[j]);
        //         j++;
        //     }
        //     waterTrapped+=(min(maxLeft,maxRight)-height[i]);
        // }
        // return waterTrapped;
    }
};
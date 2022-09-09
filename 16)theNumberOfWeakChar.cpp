// class Solution {
// public:
//     int numberOfWeakCharacters(vector<vector<int>>& properties) {
//         int count=0;
//         int n=properties.size();
//         for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<n;j++)
//             {
//                 if(properties[i][0]>properties[j][0] && properties[i][1]>properties[j][1])
//                 {
//                     count++;
//                 }
//             }
//         }
//         return count;
//     }
// };
class Solution {
public:
    static bool cmp(vector<int>& a, vector<int>& b) {
        if (a[0] != b[0]) return a[0] > b[0];
        return a[1] < b[1];
    }
    
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        sort(properties.begin(), properties.end(), cmp);

        int res = 0, mx = INT_MIN;
        for (auto p : properties) {
            if (mx > p[1]) res++;
            else mx = p[1];
        }
        return res;
    }
};
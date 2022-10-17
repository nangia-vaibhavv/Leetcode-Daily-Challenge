// class Solution {
// public:
//     bool checkIfPangram(string sentence) {
//         map<int,int>mp;
//         for(int i=97;i<=122;i++)
//         {
//             mp[i]=0;
//         }
//         for(char it:sentence)
//         {
//             mp[it-'a']++;
//         }
//         // for(auto it:mp)
//         // {
//         //     if(it.second<1)
//         //     {
//         //         return false;
//         //     }
//         // }
//         // return true;
//         for(auto x:mp){
//         cout<<x.first<<":"<<x.second<<endl;
// }
//         return true;
//     }
// };


class Solution {
public:
bool checkIfPangram(string sentence) {
        map<char, int> mp;
        for(int i=0; i<sentence.size(); i++)
            mp[sentence[i]]++;
        
        if(mp.size()==26)
            return true;
        else
            return false;
    }
};
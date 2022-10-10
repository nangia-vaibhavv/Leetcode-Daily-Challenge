// class Solution {
// public:
//     bool isPalindrome(string req)
//     {
//         int i=0, j=req.length();
//         while(i<=j)
//         {
//             if(req[i]==req[j])
//             {
//                 i++;
//                 j--;
//             }
//             else return false;
//         }
//         return true;
//     }
//     string breakPalindrome(string palindrome) {
// //         if length of given string is 1 than not possible
//         string ans;
//         if(palindrome.length()==1)
//         {
//             return ans;
//         }
//         int i=0;
//         while(palindrome[i]=='a' && i!=palindrome.size()-1)
//         {
//             // if(i==palindrome.size()-1)
//             // {
//             //     palindrome[palindrome.size()-1]=='b';
//             // }else{
//              i++;   
//             // }
//         }
//         if(i==palindrome.size()-1)
//         {
//             palindrome[palindrome.size()-1]='b';
//         }
//         else{
//         palindrome[i]='a';
//         }
//         ans=palindrome;
//         return ans;
//     }
// };

class Solution {
public:
    string breakPalindrome(string palindrome) {
        int n=palindrome.size();
        if(n<2) return "";
        for(int i=0;i<n;i++){
            if(n%2 && i==n/2) continue;
            if(palindrome[i]!='a'){
                palindrome[i]='a';
                return palindrome;
            }
        }
        palindrome[palindrome.size()-1]='b';
        return palindrome;
    }
};
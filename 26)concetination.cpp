// class Solution {
// public:
//         long long mod=1e9+7;
//     string decimalToBinary(int num)
//     {
//         string str;
//         while(num)
//         {
//             if(num & 1)
//             {
//                 str+='1';
//             }else str+='0';
//             num>>=1;
//         }
//         // reverse(str,str+(str.size()-1));
//          int n = str.length();
 
//     // Swap character starting from two
//     // corners
//     for (int i = 0; i < n / 2; i++)
//         swap(str[i], str[n - i - 1]);
//         return str;
//          // for(int i=str.size()-1 ; i>=0 ; i--)
//          // cout<< str[i];
//         // return 0;
//     }
//     int binaryToDecimal(string n)
// {
//     string num = n;
//     long long int dec_value = 0;
 
//     // Initializing base value to 1, i.e 2^0
//     int base = 1;
 
//     int len = num.length();
//     for (int i = len - 1; i >= 0; i--) {
//         if (num[i] == '1')
//             dec_value += base;
//         base = base * 2;
//     }
 
//     return dec_value;
// }
//     int concatenatedBinary(int n) {
//         string res;
// //         convert number to binary
//         for(int i=1;i<=n;i++)
//         {
//             res+=decimalToBinary(i);
//         }
//        return binaryToDecimal(res)%mod;
//     //      long long value = stoull(res, 0, 2);
//     // return value;
//     }
// };



class Solution {
public:
int concatenatedBinary(int n) {        
    long ans = 1;
    long mod = 1e9+7;
    long len = 1;
    
    // length will be increment as pow of 2 occur
    for(int i=2;i<=n;i++){
        if((i & (i-1)) == 0){
            len++;
        }
        
        ans = ((ans<<len)%mod + i)%mod; 
    }
    return ans%mod;
}};
class Solution {
public:

       bool reorderedPowerOf2(int n) {
        string res=reorder(n);
        for(int i=0;i<30;i++)
        {
            if(res==reorder(1<<i))
            {return true;}
        }
        
        return false;
    }
    
    string reorder(int n)
    {
        // string res=to_string(num);
        // sort(res.begin(),res.end());
        // return res; 
        string res=to_string(n);
        sort(res.begin(),res.end());
         return res;
    }
};
class Solution {
public:
    void dfs(vector<vector<int>>&matrix,int row, int col, int prev,vector<vector<int>>& ocean)
    {
        if(row<0 || col<0 || row>=matrix.size() || col>=matrix[0].size())
        {
            return;
        }
        if(matrix[row][col]<prev)
        {
            return;
        }
//         matrix has non negaive hence whenever cvisite keep it -1
        if(ocean[row][col]==-1)
        {
            return;
        }
        ocean[row][col]=-1;
        dfs(matrix,row+1,col,matrix[row][col],ocean);
        dfs(matrix,row-1,col,matrix[row][col],ocean);
        dfs(matrix,row,col+1,matrix[row][col],ocean);
        dfs(matrix,row,col-1,matrix[row][col],ocean);

    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& matrix) {
        vector<vector<int>>ans;
        if(matrix.size()==0)return ans;
        vector<vector<int>>pacific(matrix.size(),vector<int>(matrix[0].size(),0));
        vector<vector<int>>atlantic(matrix.size(),vector<int>(matrix[0].size(),0));
        for(int col=0;col<matrix[0].size();col++)
        {
            dfs(matrix,0,col,INT_MIN,pacific);
            dfs(matrix,matrix.size()-1,col,INT_MIN,atlantic);
        }
         for(int row=0;row<matrix.size();row++)
        {
            dfs(matrix,row,0,INT_MIN,pacific);
            dfs(matrix,row,matrix[0].size()-1,INT_MIN,atlantic);
        }
        vector<int>v;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(pacific[i][j]==-1 && pacific[i][j]==atlantic[i][j])
                {
                    v.clear();
                    v.push_back(i);
                    v.push_back(j);
                    ans.push_back(v);
                }
            }
        }
        return ans;
    }
};
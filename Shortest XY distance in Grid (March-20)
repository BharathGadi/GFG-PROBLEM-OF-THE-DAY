class Solution {
  public:
    int shortestXYDist(vector<vector<char>> grid, int N, int M) {
         queue<pair<int,pair<int,int>>>q;
        vector<vector<int>>vis(N,vector<int>(M,0));
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<M;j++)
            {
                if(grid[i][j]=='X')
                {
                    q.push({0,{i,j}});
                    vis[i][j]=1;
                }
                
            }
        }
        int delr[]={-1,0,1,0};
        int delc[]={0,1,0,-1};
        while(!q.empty())
        {
            auto it=q.front();
            int dis=it.first;
            q.pop();
            int row=it.second.first;
            int col=it.second.second;
            for(int i=0;i<4;i++)
            {
                int newrow=row+delr[i];
                int newcol=col+delc[i];
                if(newrow>=0 && newcol>=0 && newrow<N && newcol<M && !vis[newrow][newcol])
                {
                    if(grid[newrow][newcol]=='Y')return dis+1;
                    vis[newrow][newcol]=1;
                    q.push({dis+1,{newrow,newcol}});
                    
                }
            }
        }
        return -1;
        
    }
};

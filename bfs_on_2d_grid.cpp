#include <bits/stdc++.h>
using namespace std;
int grid[105][105];
vector<pair<int,int>> d ={{-1,0},{1,0},{0,-1},{0,1}};
bool vis[105][105];
int c,r;
bool valid(int i , int j)
{
    if(i<0 || i>=c || j < 0 || j >=r)
        return false;
    
    return true;
}

void bfs(int si,int sj)
{
    queue<pair<int,int>> q;
    q.push({si,sj});
    vis[si][sj] = true;

    while (!q.empty())
    {
        pair<int,int> per = q.front();
        q.pop();
        int per_i = per.first;
        int per_j = per.second;
        cout << per_i << " " << per_j << endl;
        for(int i = 0; i < 4;i++)
        {
            int ci,cj;
            ci = per_i + d[i].first;
            cj = per_j + d[i].second;
            if( valid(ci,cj) &&!vis[ci][cj]){
                q.push({ci,cj});
                vis[ci][cj] = true;
            }
        }
    }
    
}
int main()
{
    
    cin >> c >> r;
    for(int i = 0; i < c;i++)
    {
        for(int j = 0; j < r;j++)
        {
            cin >> grid[i][j];
        }
    }
    memset(vis,false,sizeof(vis));
    int si,sj;
    cin >> si >> sj;
    bfs(si,sj);
    return 0;
}
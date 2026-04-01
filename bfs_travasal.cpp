#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
int visited[1005];
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    visited[src] = true;
    while(!q.empty())
    {
        int p = q.front();
        q.pop();

        cout << p << " ";

        for(int x:adj_list[p])
        {
            if(!visited[x])
            {
                q.push(x);
                visited[x] = true;
            }
        }
    }
}
int main()
{
    int n,e;
    cin >> n >> e;
    while(e--)
    {
        int a,b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    memset(visited, false,sizeof(visited));
    bfs(0);
    return 0;
}
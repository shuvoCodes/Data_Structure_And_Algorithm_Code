#include <bits/stdc++.h>
using namespace std;
vector<int>adj_list[1005];
bool visited[1005];
int level[1005];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    visited[src] = true;
    level[src] = 0;
    while(!q.empty())
    {
        int per = q.front();
        q.pop();

        cout << per << " ";

        for(int x : adj_list[per])
        {
            if(!visited[x])
            {
                q.push(x);
                visited[x] = true;
                level[x] = level[per] + 1;
            }
        }
    }
    cout << endl;
}
int main()
{
    int n,e;
    cin >> n >> e;

    while(e--)
    {
        int a , b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    memset(visited,false,sizeof(visited));
    memset(level,-1,sizeof(level));
    int src,dist;
    cin >> src >> dist;
    
    bfs(src);
    for(int i = 0; i < n;i++)
    {
        cout << i << " -> " << level[i] << endl;
    }
    cout << level[dist];
    return 0;
}
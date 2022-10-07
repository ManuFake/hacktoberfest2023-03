// ----------------------Function for Counting Number of Shortest Path----------------------
//                     -------------------(using BFS)-------------------

int n, m;
cin>>n>>m;
vvi adj(n + 1);
for(int i = 0;i < m;i++)
{
    int x, y;
    cin>>x>>y;
    adj[x].push_back(y);
    adj[y].push_back(x);
}
queue<int>q;
q.push(1);
vi visited(n + 1, 0);
vi ans;
vi dist(n + 1, -1);
dist[1] = 0;
visited[1] = 1;
vector<int>tmp(n + 1, 0);
tmp[1] = 1;
while(!q.empty())
{
    int v = q.front();
    q.pop();
    ans.push_back(v);
    for(auto i:adj[v])
    {
        if(dist[i] == -1)
        {
            q.push(i);
            dist[i] = dist[v] + 1;
            visited[i] = 1;
            tmp[i] = tmp[v];
        }
        else if(dist[i] == dist[v] + 1)
        {
            tmp[i] = (tmp[i] + tmp[v]) % mod;
        }
    }
}

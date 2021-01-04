#include <bits/stdc++.h>
using namespace std;

vector<int> v[100];
bool vis[100];
int previous[100];
int d[100];

void BFS(int s)
{
    int p, i;
    queue<int> q;
    q.push(s);

    d[s] = 0;
    vis[s] = true;
    previous[s] = -1;

    while (!q.empty())
    {

        p = q.front();
        cout << p << "  ";
        q.pop();

        for (i = 0; i < v[p].size(); i++)
        {

            if (vis[v[p][i]] == false)
            {
                d[v[p][i]] = d[p] + 1;
                q.push(v[p][i]);

                vis[v[p][i]] = true;
                previous[v[p][i]] = p;
            }
        }
    }
}

int main()
{
    int source, edges, nodes;
    int a, b;

    cin >> nodes >> edges;

    int i;

    for (i = 0; i < edges; i++)
    {
        cin >> a >> b;

        v[a].push_back(b);
        v[b].push_back(a);
    }

    cin >> source;

    for (i = 0; i < nodes; i++)
    {
        vis[i] = false;
        d[i] = 0;
        previous[i] = -1;
    }

    BFS(source);
    cout << endl;
    for (i = 0; i < nodes; i++)
        cout << previous[i] << "  ";

    return 0;
}
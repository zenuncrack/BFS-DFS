
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

vector<int>Node_Vec[100];
int color[10];
int par[10];
void DFS(int source)
{
    stack<int> S;
    int white = 0, gray = 1, black = 2;
    for(int i=0; i<=10; i++)
    {
        color[i]=white;
        par[i]=i;
    }
    S.push(source);
    color[source]=gray;
    while (!S.empty())
    {
        int u=S.top();
        S.pop();

        for(int j=0; j<Node_Vec[u].size(); j++)
        {
            int v =Node_Vec[u][j];
            if(color[v]== white)
            {
                color[v] = gray;
                S.push(v);
                par[v]=u;

            }
               color[source]=black;
        }

    }
}
void path(int dest)
{
    if(par[dest] != dest)
    {
        path(par[dest]);
        cout<< path <<endl;
    }
  cout<< dest <<"- >";
}
int main()
{
    int node_no, edge_no, dest;

    cin>>node_no>>edge_no;

    for(int i=1; i<=edge_no; i++)
    {
        int nodeA, nodeB;
        cin>>nodeA;
        cin>>nodeB;
        Node_Vec[nodeA].push_back(nodeB);
        Node_Vec[nodeB].push_back(nodeA);
    }

    DFS(1);
    for(int i=0; i<10; i++)
    {
        if(color[i]>-1)
        {
            cout<<i<<"="<< color[i]<<endl;
        }
    }

    cin>> dest;
    path(dest);
}

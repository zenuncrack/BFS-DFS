#include<bits/stdc++.h>
using namespace std;
vector<int>Node_Vec[100];
int level[10];
int par[10];
void BFS(int source)
{
    queue <int>Q;
    for(int i=0; i<10; i++)
    {
        level[i]=-1;
        par[i]=i;
    }
    Q.push(source);
    level[source]=0;
    while (!Q.empty())
    {
        int u=Q.front();
        Q.pop();
        for(int j=0; j<Node_Vec[u].size(); j++)
        {
            int v =Node_Vec[u][j];
            if(level[v]== -1)
            {
                level[v] = level[u]+1;
                Q.push(v);
                par[v]=u;
            }
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
    int node_no, edge_no,des;
    printf("Enter the number of nodes :");
    cin>>node_no;
    printf("Enter the number of edges :");
    cin>>edge_no;
    cout<<"Enter connection : "<<endl;
    for(int i=1; i<=edge_no; i++)
    {
        int nodeA, nodeB;
        cin>>nodeA;
        cin>>nodeB;
        Node_Vec[nodeA].push_back(nodeB);

    }
    cout<<"Adjacent list is : "<<endl;
    for(int i=1; i<=node_no; i++)
    {
        cout<<i<<"->";
        for(int j=0; j< Node_Vec[i].size(); j++)
        {
            cout<<Node_Vec[i][j];
        }
        cout<<endl;
    }
    BFS(1);
    for(int i=0; i<10; i++)
    {
        if(level[i]>-1)
        {
            cout<<i<<"="<< level[i]<<endl;
        }
    }
    cout<<"Enter the destination: ";
    cin>>des;
    path(des);
    cout<<endl;

}

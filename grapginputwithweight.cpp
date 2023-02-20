
#include<bits/stdc++.h>
using namespace std;
vector<int>Node_Vec[100];
vector<int>Node_Cost[100];
int main()
{
    int node_no, edge_no;
    printf("Enter the number of nodes: ");
    scanf("%d", &node_no);
    printf("Enter the number of edges: ");
    scanf("%d", &edge_no);
    for(int i = 1; i <= edge_no; i++)
    {
        int nodeA, nodeB, cost;
        scanf("%d %d %d", &nodeA, &nodeB, &cost);
        Node_Vec[nodeA].push_back(nodeB); // for directed graph
        Node_Cost[nodeA].push_back(cost); // for directed graph
    }
//Print Cost Adjacency List by traversing the list
    for(int i = 1; i <= node_no; i++)
    {
        printf("%d -> ", i);
        for(int j = 0; j < Node_Cost[i].size(); j++)
        {
            printf("%d ", Node_Cost[i][j]);
        }
        printf("\n");
    }
}

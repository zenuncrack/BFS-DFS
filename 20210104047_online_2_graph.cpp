

#include<bits/stdc++.h>
using namespace std;
vector<int>Node_Vec[100];
vector<int>Node_Cost[100];
int main()
{
    int node_no, edge_no;
    printf("Enter the number of nodes: ");
    cin>>node_no;
    printf("Enter the number of edges: ");
    cin>>edge_no;
    for(int i = 1; i <= edge_no; i++)
    {
        int nodeA, nodeB, cost;
        cin>>nodeA>>nodeB>>cost;
        Node_Vec[nodeA].push_back(nodeB);
        Node_Vec[nodeB].push_back(nodeA);
        Node_Cost[nodeA].push_back(cost);
        Node_Cost[nodeB].push_back(cost);
    }
    int i,j,k;
    for(int i = 1; i <= node_no; i++)
    {
        cout<<i<<"->";
        for(int k=0;k<Node_Vec[i].size();i++){
             cout<< Node_Vec[i][k]<<",";
        }
        for(int j = 0; j < Node_Cost[i].size(); j++)
        {
            cout<<Node_Cost[i][j]<<endl;
        }
        cout<<endl;
    }
     for(int i = 1; i <= node_no; i++)
    {
        cout<<i<<"->";
        for(int k=0;k<Node_Vec[i].size();i++){
             cout<< Node_Vec[i][k]<<",";
        }
        for(int j = 0; j < Node_Vec[i].size(); j++)
        {
            cout<<Node_Vec[i][j]<<endl;
        }
        cout<<endl;
    }
}

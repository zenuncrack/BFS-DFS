
#include<bits/stdc++.h>
using namespace std;
vector<int> v[11];
int level[11];//distance
int parent[11];
void BFS(int src)
{
    queue <int> Q;

    Q.push(src);
    level[src]=0;

    while(!Q.empty())
    {

        int x=Q.front();
        Q.pop();
        for(int j=0; j<v[x].size(); j++)
        {
            int y=v[x][j];
            if(level[y]==0)
            {
                level[y]=level[x]+1;
                parent[y]=x;
                Q.push(y);
            }
        }
    }


}

void FOR(int i)
{

    if(parent[i]!=i)
    {

        FOR(parent[i]);
        cout<<i<<"->";
    }


}

int main ()
{

    int n=7,e=6;
    for(int i=1; i<=e; i++)
    {

        int nA,nB;
        cin >>nA>>nB;
        v[nA].push_back(nB);
        //v[nB].push_back(nA);

    }

    cout<<"Adjacency List:"<<endl;
    for(int i=0; i<=n; i++)
    {

        cout<<i<<"->";
        for (int j=0; j<v[i].size(); j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    int source =1;
    BFS(source);
    int dest =7;
    cout<<level[dest]<<endl;
    cout<<source <<"->";//source path
    FOR(dest);//rest path print

}

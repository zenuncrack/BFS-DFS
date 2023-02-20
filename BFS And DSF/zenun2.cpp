
#include<bits/stdc++.h>
using namespace std;

int main (){

    priority_queue<int,vector<int>,greater<int>>q;

    for(int i=0;i<5;i++){
        int n;
        cin>>n;
        q.push(n);
    }
    while(!q.empty()){

        cout<<q.top()<<endl;
        q.pop();
    }

}

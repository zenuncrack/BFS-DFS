#include<bits/stdc++.h>
using namespace std;

int main (){

    vector<int>v;
    for(int i=0;i<5;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    //reverse(v.begin(),v.end());
    v.insert(v.begin(),100);
    for(auto it:v){
        cout<<it<<endl;
    }

    int ans =binary_search(v.begin(),v.end(),5);

    if(ans ==1){
        cout<<"Found"<<endl;
    }
    else {
        cout<<"Not found"<<endl;
    }

}

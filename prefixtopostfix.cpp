#include<bits/stdc++.h>
using namespace std;
bool isoperator(char x){

    switch(x){
    case '+':
    case '-':
    case '/':
    case '*':
        return true;
    }

        return false;


}



void prefixtopostfix(string prefix){

    stack <string> p;

    for(int i=prefix.length();i>=0;--i){

        if((prefix[i]>= 'A' && prefix[i]<='Z') || (prefix[i]>= 'a' && prefix[i]<='z') || (prefix[i]>= '0' && prefix[i]<='9'))
           {

           string op(1,prefix[i]);
            p.push(op);

        }

        else if (isoperator(prefix[i])) {
            string op1 = p.top();
            p.pop();
            string op2 = p.top();
            p.pop();
            string exp= op1+op2+prefix[i];
            p.push(exp);

        }
    }

        cout<<p.top()<<endl;

}

int main (){
    string s;
    cin >>s;

    prefixtopostfix(s);



}

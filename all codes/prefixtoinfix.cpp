
#include<bits/stdc++.h>
using namespace std;

bool isoperator(char x){

    switch(x){

    case '+':
    case '-':
    case '/':
    case '*':
    case '^':
    case '%':
        return true;
    }

    return false;

}
string pretoinfix(string prefix){

    stack<string>s;
    for(int i=prefix.length()-1;i>=0;i--){

        if(isoperator(prefix[i])){
            string op1=s.top(); s.pop();
            string op2=s.top(); s.pop();
            string exp;
            exp=op1+prefix[i]+op2;
            s.push(exp);
        }
        else {

            s.push(string(1,prefix[i]));
        }
    }

    return s.top();

}
int main (){

    string s;
    getline(cin,s);
    cout<< pretoinfix(s);



}

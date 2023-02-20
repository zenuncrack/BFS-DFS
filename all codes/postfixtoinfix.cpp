#include<bits/stdc++.h>
using namespace std;
string postfixtoinfix(string postfix ){

    stack <string> s;
    for(int i=0;i<postfix.length();i++){
        if((postfix[i]>='A'&&postfix[i]<='Z')||(postfix[i]>='a'&&postfix[i]<='z')||(postfix[i]>='0'&&postfix[i]<='9'))
        {

            s.push(string(1,postfix[i]));
        }
        else {


            string op1=s.top();
            s.pop();
            string op2 =s.top();
            s.pop();
            s.push(op2+postfix[i]+op1);
        }
    }

    return s.top();

}
int main (){

    string s;
    getline (cin,s);

    cout<<postfixtoinfix(s);

}

#include<bits/stdc++.h>
using namespace std;
int priority (char symbol)
{

    if(symbol=='^')
    {
        return 3;
    }
    else if (symbol=='*'|| symbol =='/')
    {
        return 2;
    }

    else if (symbol=='+'||symbol =='-')
    {
        return 1;
    }
                else
                    return 0;

}
string infix_to_prefix(string infix)
{

    string prefix;
    reverse(infix.begin(),infix.end());
    stack <char> s;
    for(int i=0; i<infix.length(); i++)
    {

        if(infix[i]>='A'&&infix[i]<='Z'|| infix[i]>='a'&&infix[i]<='z'||infix[i]>='0'&&infix[i]<='9')
        {

            prefix=prefix+infix[i];
        }

        else if (infix[i]=='(')
        {
            s.push(infix[i]);
        }
        else if(infix[i]==')')
        {
            while(s.top()!='(')
            {
                prefix+=s.top();
                s.pop();
            }
            s.pop();
        }
        else
        {
            while(!s.empty()&&priority(infix[i])<=priority(s.top()))
            {
                prefix+=s.top();
                s.pop();
            }
            s.push(infix[i]);
        }
    }
        while(!s.empty())
        {
            prefix+=s.top();
            s.pop();
        }
        reverse(prefix.begin(),prefix.end());
        return prefix;



}

int main (){

    string s;
    getline(cin,s);

    string s1=infix_to_prefix(s);
    cout<<s1<<endl;



}

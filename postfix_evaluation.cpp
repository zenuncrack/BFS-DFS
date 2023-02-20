#include<bits/stdc++.h>
using namespace std;
int evaluatePostfix(string postfix)
{

    stack<char>s;
    for(int i=0; i<postfix.length(); i++)
    {
        if(postfix[i]==' ')
        {
            continue;

        }
        else if(postfix[i]>='0'&&postfix[i]<='9')
        {
            s.push(postfix[i]-'0');
        }
        else
        {

            int a=s.top();

            s.pop();
            int b=s.top();
            s.pop();
            switch(postfix[i])
            {

            case '^':
                s.push(pow(b,a));
                break;

            case '*':
                s.push(b*a);
                break;
            case '/':
                s.push(b/a);
                break;
            case '+':
                s.push(b+a);
                break;
            case '-':
                s.push(b-a);
                break;
            }

        }
    }
     return s.top();7
}

int main()
{

    string postfix;
    getline(cin,postfix);
    int result = evaluatePostfix(postfix);
    cout<<result;
    return 0;

}





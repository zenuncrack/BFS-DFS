#include<bits/stdc++.h>
using namespace std;
void func()
{

    cout<<"Global ami"<<endl;

}

namespace ami
{

void func()
{
    cout<<"amar ami"<<endl;

}

}


namespace Parallel_ami
{

void func()
{
    cout<<"Parallel ami"<<endl;

}

}
int main ()
{


    func();
    ami::func();
    Parallel_ami::func();


}

#include<bits/stdc++.h>
using namespace std;

struct node
{


    int data;
    node *left;
    node *right;


};

node *root = NULL;
void post_order(node *dummy){

    if(dummy !=NULL){

        post_order(dummy->left);
        post_order(dummy->right);
        cout<<dummy->data<<"\t";
    }


}
void in_order(node *dummy){

    if(dummy !=NULL){

        in_order(dummy->left);
        cout<<dummy->data<<"\t";
        in_order(dummy->right);
    }


}
void pre_order(node *dummy){

    if(dummy !=NULL){
        cout<<dummy->data<<"\t";
        pre_order(dummy->left);
        pre_order(dummy->right);
    }


}
int main ()
{

    node *obj1,*obj2,*obj3,*obj4,*obj5,*obj6,*obj7;
    obj1=new node();
    obj2=new node();
    obj3=new node();
    obj4=new node();
    obj5=new node();
    obj6=new node();
    obj7=new node();

    obj1->data =10;
    obj2->data =15;
    obj3->data =11;
    obj4->data =25;
    obj5->data =51;
    obj6->data =30;
    obj7->data =19;

    obj1->left=NULL;
    obj2->left=NULL;
    obj3->left=NULL;
    obj4->left=NULL;
    obj5->left=NULL;
    obj6->left=NULL;
    obj7->left=NULL;

    obj1->right=NULL;
    obj2->right=NULL;
    obj3->right=NULL;
    obj4->right=NULL;
    obj5->right=NULL;
    obj6->right=NULL;
    obj7->right=NULL;

    obj1->left=obj2;
    obj1->right=obj3;
    obj2->left=obj4;
    obj2->right=obj5;
    obj3->left=obj6;
    obj3->right=obj7;

    root =obj1;
    cout<<"pre order:"<<endl;
    pre_order(root);
    cout<<endl;
    cout<<"post order:"<<endl;
    post_order(root);
    cout<<endl;
   cout<<"in order:"<<endl;
    in_order(root);
}

#include<iostream>
#define null 0
using namespace std;
struct node{
    int data;
    node *next,*prev;
};
node *first,*temp,*ttemp,*p;
void createfirst(){
    first =new node;
    cin>>first->data;
    first->next=null;
    first->prev=null;
}
void Addnode(){
    temp=first;
    while(temp->next!=null){
    temp=temp->next;
}
    ttemp=new node;
    cin>>ttemp->data;
    ttemp->next=null;
    ttemp->prev=temp;
    temp->next=ttemp;
}
void disp(){
    temp=first;
    while(temp!=null){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
int main(){
    createfirst(10);
    Addnode(20);
    Addnode(30);
    Addnode(40);
    Addnode(50);
    Addnode(60);
    disp();
}
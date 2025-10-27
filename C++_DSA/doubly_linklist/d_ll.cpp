#include<iostream>
#define null 0
using namespace std;
struct node{
    int data;
    node *next,*prev;
};
node *first,*temp,*ttemp,*p;
void createfirst(int val){
    first =new node;
    cin>>first->data;
    first->next=null;
    first->prev=null;
}
void Addnode(int val){
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
                         // ADD NEW NODE BEFORE FIRST

void Add_before_first(){
    temp=new node;
    cin>>temp->data;
    temp->prev=null;
    temp->next=first;
    first->prev=temp;
    first=temp;
}

                         //  ADD NEW NODE BEFORE GIVEN DATA

void add_before_data(int x,int y){
    temp=first;
    while(temp->data!=x){
        ttemp=temp;
        temp=temp->next;
    }
    p=new node;
    p->data=y;
    ttemp->next=p;
    p->next=temp;
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
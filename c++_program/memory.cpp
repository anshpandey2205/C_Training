# include<iostream>
using namespace std;
int x;
int main(){
    int x1=25;
    int *p=&x1;
    int *p1=new int;
    *p1=100;
    cout<<*p1<<endl;
    delete p1;
    cout<<*p<<endl;
    cout<<"end"<<endl;
}
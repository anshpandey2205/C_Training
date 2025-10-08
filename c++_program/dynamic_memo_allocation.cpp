#include<iostream>
using namespace std;
class demo{
    public:
    int x,y;
};
int main(){
    demo obj1;   //static object // store in stack;
    demo *obj2=new demo();//  dynamic object
}
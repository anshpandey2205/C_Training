#include<iostream>
using namespace std;
class demo{
    public:
    int data;
    demo(){
        cout<<"object constructed\n";
    }
    ~demo(){
        cout<<"object destructed\n";
    }
};
int main(){
    demo d;
    {
        demo x;
    }
}
#include<stdio.h>
int main(){
    int xor=0;
    int a=5;
    int b=3;
    a=a^b;
    b=a^b;
    a=a^b;
    printf("a=%d",a);
    printf("b=%d",b);
}
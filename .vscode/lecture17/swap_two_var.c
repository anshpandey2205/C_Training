#include <stdio.h>
int swap(int *a,int *b){
    int *a=*a+*b;
    int *b=*a-*b;
    int *a=*a-*b;
    printf("%d %d",*a,*b);
}

int main() {
    int a=10;
    int b=5;
    swap(&a,&b);
    return 0;
}
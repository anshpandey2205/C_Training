#include<stdio.h>
void sum(int a){
    if(a==0){
        return;
    }
    sum(a-1);
    printf("%d",a);
}

                       //  REVERSE ORDER

void sum2(int a){
    if(a==0){
        return;
    }
    printf("%d",a);
    sum2(a-1);
}
                       //  SUM UPTO N
  int printSum(int n){
    if(n==0){
        return 0;
    }else{
        return n+printSum(n-1);
    }
  }
                      // FACTORIAL OF ANY NUMBER
  int factorial(int n){
    if(n==0||n==1){
        return 1;
    }
    return n*factorial(n-1);
  }

                       //  POWERR

    int power(int x,int n){
        if(n==0){
            return 1;
        }
        return x*power(x,n-1);
    }    
    
                       // ARRAY SUM

    int arrSum(int arr[],int n){
        if(n==0){
            return 0;
        }
        return arr[n-1]+arrSum(arr,n-1);
    }                   
int main(){
    //sum(5);
    //sum2(5);
    //int sum=printSum(3);
    // int sum=factorial(5);
    // int sum=power(5,2);
    int n=5;
    int arr[5]={1,2,3,4,5};
    int sum=arrSum(arr,n);
    printf("%d",sum);
}
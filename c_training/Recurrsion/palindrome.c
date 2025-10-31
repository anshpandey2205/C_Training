#include<stdio.h>
int palindrome(int arr[],int i,int j){
    if(i>=j){
        return 1;
    }
    if(arr[i]!=arr[j]){
        return 0;
    }
    return palindrome(arr,++i,--j);
}
int main(){
 int arr[3]={1,2,1};
 int startIndex=0;
 int endIndex=2;
 int data = palindrome(arr,startIndex,endIndex);
 printf("%d",data);

}
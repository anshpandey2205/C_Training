#include<stdio.h>
#include<string.h>
int main(){
    char str[]="hello";
    char target='l';
    char nStr[100];
    int j=0;
    int ln=strlen(str);
    for(int i=0;i<ln;i++){
        if(str[i]!=target){
            nStr[j]=str[i];
            j++;
        }
    }
    nStr[j]='\0';
    printf("%s",nStr);

}
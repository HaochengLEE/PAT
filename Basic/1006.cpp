//
// Created by 李昊城 on 2019/11/16.
//
#include <stdio.h>
int main(void){
    int a,i=0;
    int b[3]={0};
    scanf("%d",&a);
    do{
        b[i]=a%10;
        a=a/10;
        i++;
    }while (a>0);
    for(int i=0;i<b[2];i++){
        printf("B");

    }
    for(int i=0;i<b[1];i++){
        printf("S");
    }
    for(int i=1;i<=b[0];i++){
        printf("%d",i);
    }
    return 0;
}

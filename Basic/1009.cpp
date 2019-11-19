//
// Created by 李昊城 on 2019/11/19.
//
#include <stdio.h>
int main(void){
    int i=0;
    char a[90][90];
    while (scanf("%s",a[i])!=EOF){
        i++;

    }
    for(int i=num-1;i>=0;i--){
        printf("%s",a[i]);
        if(i>0)printf(" ");
    }

    return 0;
}

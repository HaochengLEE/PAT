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
    for(int j=i-1;j>=0;j--){
        printf("%s",a[j]);
        if(j>0)printf(" ");
    }

    return 0;
}

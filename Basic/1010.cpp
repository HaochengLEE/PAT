//
// Created by 李昊城 on 2019/11/3.
//
#include <stdio.h>
#include <cstdio>

int main(void){
    int a[100];
    int i=0;
    int j,k;
    int count;
    while (scanf("%d%d",&j,&k)==2){
        a[k]=j;
        if(j>i)i=j;
    }
    a[0]=0;
    for(int n=1;n<i;n++){
        a[n-1]=a[n]*n;
        a[n]=0;
        if(a[i-1]!=0)count++;
    }
    if(count==0){
        printf("0 0");
    } else {
        for (int n = i; n > 0; n--) {
            if (a[n] != 0) {
                printf("%d ", a[n]);
                count--;
                if (count != 0)printf(" ");
            }

        }
    }
    return 0;

}

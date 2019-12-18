//
// Created by 李昊城 on 2019/11/11.
//
#include <stdio.h>
#include <math.h>
int main(void){
    int n;
    char c;
    scanf("%d %c",&n,&c);
    
    int bottom=(int)sqrt(2.0*(n+1))-1;
    if(bottom%2==0){
        bottom--;
    }
    int exist=(bottom+1)*(bottom+1)/2-1;
    //输出倒三角
    for(int i=bottom;i>=1;i-=2){
        for(int j=0;j<(bottom-i)/2;j++){
            printf(" ");
        }
        for(int j=0;j<i;j++){
            printf("%c",c);
        }
        printf("\n");
    }

    //输出正三角形
    for(int i=3;i<=bottom;i+=2){
        for (int j = 0; j < (bottom-i)/2; j++) {
            printf(" ");
        }
        for(int j=0;j<i;j++){
            printf("%c",c);
        }
        printf("\n");
    }
    printf("%d\n",n-exist);
    return 0;
}

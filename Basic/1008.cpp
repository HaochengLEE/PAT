//
// Created by 李昊城 on 2019/10/29.
//
#include <stdio.h>
int main(void){
    int a,b;
    int count=0;
    scanf("%d%d",&a,&b);
    b=b%a;//修正b的值
    int arr[110];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for(int j=a-b;j<a;j++){
       printf("%d",arr[j]);
       count++;
       if(count<a)printf(" ");

    }
    for(int i=0;i<a-b;i++){
        printf("%d",arr[i]);
        count++;
        if(count<a) printf(" ");

    }
    return 0;
}

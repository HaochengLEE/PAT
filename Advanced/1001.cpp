//
// Created by 李昊城 on 2019/11/23.
//
#include <stdio.h>

int main(void){
    int a,b;
    int k=0;
    char arr[10];
    scanf("%d%d",&a,&b);
    int sum=a+b;
    if(a+b<0){
        printf("-");
        sum=-sum;
    }
    int avg=sum;
    //如果avg==0，则直接赋0
    if(avg==0){
        arr[k++]=0;
    }
    //取出avg每一位的值
    while (avg>0){
        arr[k++]=avg%10;
        avg=avg/10;
    }
    int len=k;
    for(int i=len-1;i>=0;i--){
        printf("%d",arr[i]);
        //判断是不是第三个，是不是最后一位
        if(i%3==0&&i>0){
            printf(",");
        }

    }



    return 0;
}

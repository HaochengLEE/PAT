//
// Created by 李昊城 on 2019/12/17.
//

#include <stdio.h>
int main(void){
    int a,b;
    int arr[100]={};
    int i=0;
    int flag=1;


    scanf("%d %d",&a,&b);
    //进制转换
    do{
        arr[i++]=a%b;
        a/=b;

    }while (a);
    //判断是否回文
    for(int j=0;j<i/2;j++){
        if(arr[j]!=arr[i-1-j]){
            flag=0;
        }
    }
    if(flag){
        printf("Yes\n");
    } else{
        printf("No\n");
    }
    //逆序输出
    for(int j=i-1;j>=0;j--){
        printf("%d",arr[j]);
        if(j!=0){
            printf(" ");
        }
    }



    return 0;
}
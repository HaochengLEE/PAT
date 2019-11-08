//
// Created by 李昊城 on 2019/11/8.
//
#include <stdio.h>
int arr[100010]={0};
int main(void){
    int count;
    int flag=0;
    scanf("%d",&count);
    for(int i=0;i<count;i++){
        int a,b;
        scanf("%d%d",&a,&b);
        arr[a]+=b;
    }
    for(int i=0;i<100010;i++){
        if(arr[i]>arr[flag])flag=i;
    }
    printf("%d %d",flag,arr[flag]);
    return 0;

}

//
// Created by 李昊城 on 2019/11/12.
//
#include <stdio.h>

int main(void){
    int a,b;
    int n;
    //最长的应该是2进制，所以按2的30次方使用31位的数组做存储
    int sum[31],i=0;
    scanf("%d %d %d",&a,&b,&n);
    int count=a+b;
    //先取余再除得到对应到值
    do{
        sum[i++]=count%n;
        count/=n;

    }while (count!=0);
    //逆序输出
    for (int j=i-1;j>=0;j--){
        printf("%d",sum[j]);
    }
    return 0;
}

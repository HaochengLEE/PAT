//
// Created by 李昊城 on 2019/11/24.
//
#include <stdio.h>
#include <string.h>
int main(void){
    //依题意10的100次方long也不够装，所以使用字符串来接受输入
    char n[110];
    //定义数组来避免switch
    char number[12][12]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int count=0;
    int countNum[110];
    int k=0;
    scanf("%s",&n);
    int len=strlen(n);
    //累加读入的字符串值
    for(int i=0;i<len;i++){
        count+=n[i]-'0';
    }

    do{
        countNum[k++]=count%10;
        count=count/10;
    }while (count);

    for(int i=k-1;i>=0;i--){
        printf("%s",number[countNum[i]]);
        //最后一个不输出空格
        if(i>0){
            printf(" ");
        }
    }

    return 0;
}

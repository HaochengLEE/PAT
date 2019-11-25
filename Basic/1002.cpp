//
// Created by 李昊城 on 2018/10/11.
// 读入一个正整数 n，计算其各位数字之和，用汉语拼音写出和的每一位数字。
#include <stdio.h>
#include <string.h>
int main(void){
    char num[110];
    char Number[10][8]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    int count=0;
    int k=0;
    int result[10];
    scanf("%s",num);
    int len=strlen(num);
    for(int i=0;i<len;i++){
        count+=num[i]-'0';
    }
    while (count){
        result[k++]=count%10;
        count/=10;
    }
    for(int i=k-1;i>=0;i--){
        printf("%s",Number[result[i]]);
        if(i>0){
            printf(" ");
        }
    }

}

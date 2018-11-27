//
// Created by 李昊城 on 2018/10/11.
// 读入一个正整数 n，计算其各位数字之和，用汉语拼音写出和的每一位数字。
#include <stdio.h>
#include <cstring>
#include <cstdlib>
#include <string.h>
#include <tgmath.h>
#include <math.h>


int num(int n){
    int i=1;
    while (n>=10){
        n=n/10;
        i++;

    }
    return i;

}
int main(){
    char a[]={};
    scanf("%d",&a);
    int n=0,k,s,i=0;
    int count=strlen(a);
    int sum=0;

    char b[]={};
    char c[]={};
    for(int i=0;i<count;i++){

        k=*&a[i]-48;
        n+=k;
    }
    int stage=1;
   while(n>0){
       s=n%10;
       sum=stage*sum+s;
       stage=10;
       n/=10;

   }
   n=sum;
    printf("%d",sum);
    while (n>0){
        s=n%10;

        switch (s){
            case 1 :strcat(b, "yi");break;
            case 2 :strcat(b, "er");break;
            case 3 :strcat(b, "san");break;
            case 4 :strcat(b, "si");break;
            case 5 :strcat(b, "wu");break;
            case 6 :strcat(b, "liu");break;
            case 7 :strcat(b, "qi");break;
            case 8 :strcat(b, "ba");break;
            case 9 :strcat(b, "jiu");break;
            case 0 :strcat(b, "ling");break;


        }
        n=n/10;
        i++;
    }

    printf("%s\n",b);
    printf("%d\n",count);
    printf("%d\n",n);



    return 0;

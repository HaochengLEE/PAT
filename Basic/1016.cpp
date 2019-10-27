//
// Created by 李昊城 on 2019/10/27.
//
#include <stdio.h>
#include <cmath>

//自己写的
int pop(long long a,int c){
    int result=0,count=0;
    while (a!=0){
        if(a%10==c){
            result+=c*pow(10,count);
            count++;
        }
        a=a/10;

    }
    return result;
}

//看完书写的
//思路主要是每一个原来的值乘10就相当于，每次都做了10的次方运算
int pop2(long long a,int c){
    long long pa=0;
    while (a!=0){
        if(a%10==c){
            pa=pa*10+c;
        }
        a=a/10;
    }

    return pa;
}
int main(void){
     long long a,b;
     int c,d;
     scanf("%lld %d %lld %d",&a,&c,&b,&d);
     printf("%d",pop2(a,c)+pop2(b,d));

    return 0;
}


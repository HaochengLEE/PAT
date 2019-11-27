//
// Created by 李昊城 on 2019/11/26.
//
#include <stdio.h>
#include <string.h>
int main(void){
    char la[100][256];
    int num,min=256,ans=0;
    scanf("%d",&num);
    getchar();
    //先获取每一句的字符串
    for (int i=0;i<num;i++){
        gets(la[i]);
        int len=strlen(la[i]);
        //找出最短的字符串数来枚举
        if(len<min)min=len;
        //反转字符串
        for(int j=0;j<len/2;j++){
            char temp=la[i][j];
            la[i][j]=la[i][len-j-1];
            la[i][len-j-1]=temp;
        }
    }
    //通过枚举得到
    for(int i=0;i<min;i++){
        //选取第一个字符串为标杆
        char model=la[0][i];
        int flag=1;
        //枚举每个字符串的第i位与第一个的第i位做比较
        for(int j=1;j<num;j++){
            if(model!=la[j][i]){
                flag=0;
                break;
            }
        }
        //都相同
        if(flag) ans++;
        //出现不相同就退出循环
        else break;
    }
    if(ans){
        //倒序输出
        for(int i=ans-1;i>=0;i--){
            printf("%c",la[0][i]);
        }
    } else{
        printf("nai");
    }

    return 0;
}

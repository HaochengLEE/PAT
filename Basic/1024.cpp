//
// Created by 李昊城 on 2019/11/20.
//
#include <stdio.h>
#include <string.h>
int main(void){
    char str[10010];
    //使用gets获取输入值
    gets(str);
    //获取字符串长度
    int len=strlen(str);
    //判断正负
    if(str[0]=='-')printf("-");

    //找E的位置
    int pos=0;
    while (str[pos]!='E')pos++;

    //取出指数
    int exp=0;
    for(int i=pos+2;i<len;i++){
        exp=exp*10+(str[i]-'0');
    }

    if(exp==0){
        for (int i=1;i<pos;i++){
            printf("%c",str[i]);
        }
    }

    //指数为负
    if(str[pos+1]=='-'){
        printf("0.");
        for(int i=0;i<exp-1;i++){
            printf("0");
        }
        printf("%c",str[1]);
        for(int i=1;i<pos;i++){
            printf("%c",str[i]);
            }
        } else{
        for(int i=1;i<pos;i++){
            if(str[i]=='.')continue;
            printf("%c",str[i]);
            if(i==exp+2&&pos-3!=exp) {
                printf(".");
            }
        }
        for(int i=0;i<exp-(pos-3);i++){
            printf("0");
        }


    }


    return 0;
}

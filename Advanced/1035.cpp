//
// Created by 李昊城 on 2019/11/25.
//
#include <stdio.h>
#include <string.h>
struct User{
    char strA[20];
    char strB[20];
};

int main(void){
    //count标记不需要修改的值，countB标记需要修改的值
    int num,count=0,countB=0;
    User std;
    User end[1010];
    int k=0;
    scanf("%d",&num);

    while (num--){
        scanf("%s %s",std.strA,std.strB);
        int len=strlen(std.strB);
        int flag=0;
        //遍历第二个字符串
        for(int i=0;i<len;i++){
            //replace 1 (one) by @, 0 (zero) by %, l by L, and O by o
            if(std.strB[i]=='1'){
                std.strB[i]='@';
                flag=1;
            } else if(std.strB[i]=='0'){
                std.strB[i]='%';
                flag=1;
            } else if(std.strB[i]=='l'){
                std.strB[i]='L';
                flag=1;
            } else if(std.strB[i]=='O'){
                std.strB[i]='o';
                flag=1;
            }


        }
        if(flag==0){
            //不需要修改的字符串个数
            count++;
        } else {
            //存入新数组
            end[k]=std;
            k++;
            //修改的字符串个数
            countB++;
        }
    }
    if(countB==0){
        if(count==1){
            printf("There is 1 account and no account is modified\n");
        } else{
            printf("There are %d accounts and no account is modified\n",count);
        }

    } else{
        printf("%d\n",countB);
        for(int i=0;i<=countB;i++){
            printf("%s %s\n",end[i].strA,end[i].strB);
        }

    }


    return 0;
}




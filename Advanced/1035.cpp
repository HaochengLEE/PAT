//
// Created by 李昊城 on 2019/11/25.
//
#include <stdio.h>
#include <string.h>


int main(void){
    int num,count=0;
    char strA[20],strB[20];
    char endA[1010][20],endB[1010][20];
    int k=0;
    scanf("%d",&num);

    while (num--){
        scanf("%s %s",strA,strB);
        int len=strlen(strB);
        int flag=0;
        //遍历第二个字符串
        for(int i=0;i<len;i++){
            //replace 1 (one) by @, 0 (zero) by %, l by L, and O by o
            if(strB[i]=='1'){
                strB[i]=='@';
                flag=1;
            } else if(strB[i]=='0'){
                strB[i]='%';
                flag=1;
            } else if(strB[i]=='l'){
                strB[i]='L';
                flag=1;
            } else if(strB[i]=='0'){
                strB[i]='o';
                flag=1;
            }

            if(flag==0){
                count++;
            } else {
                //存入新数组
                endA[k++]=strA;
                endB[k++]=strB;
            }
        }
    }
    if(count==num){
        if(count==1){
            printf("There is %d account and no account is modified",count);
        } else{
            printf("There are %d account and no account is modified",count);
        }

    } else{
        printf("%d",num-count);
        for(int i=0;i<num-count;i++){
            printf("%s %s",endA[i],endB[i]);
        }
        if(count>0){
            if(count==1){
                printf("There is %d account and no account is modified",count);
            } else{
                printf("There are %d account and no account is modified",count);
            }
        }
    }


    return 0;
}




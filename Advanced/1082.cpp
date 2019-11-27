//
// Created by 李昊城 on 2019/11/27.
// 已知条件：输入的数字，未知量：如何输出
// 相似的问题：1拼音读每一位数字的和
//
#include <stdio.h>
#include <string.h>
int main(void){
    char num[15];
    //定义数组
    char a[20][8];
    char Number[10][8]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    char Col[5][8]={"Shi","Bai","Qian","Wan","Yi"};

    gets(num);
    int len=strlen(num);
    int left=0,right=len-1;
    if(num[0]=='-'){
        printf("Fu");
        left++;
    }
    while(left+4<=right){
        right-=4;
    }
    while (left<len){
        int flag=0;
        int isPrint=0;
        while (left<=right){
            if(left>0&&num[left]=='0'){
                flag=1;
            } else{
                if(flag==1){
                    printf(" ling");
                    flag=0;
                }
                if(left>0)printf(" ");
                printf("%s",Number[num[left]-'0']);
                isPrint=1;
                if(left!=right){
                    printf(" %s",Col[right-left-1]);
                }
            }

            left++;
        }
        if(isPrint==1&&right!=len-1){
            printf(" %s",Col[(len-1-right)/4+2]);
        }
        right+=4;

    }

    return 0;
}

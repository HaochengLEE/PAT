//
// Created by 李昊城 on 2019/12/8.
//
#include <stdio.h>
char code[13]={
        '0','1','2','3','4','5','6','7','8','9','A','B','C'
};
void tranform(int a){


        printf("%c",code[a/13]);
        printf("%c",code[a%13]);


}
int main(void){

    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("#");
    tranform(a);
    tranform(b);
    tranform(c);
    return 0;
}

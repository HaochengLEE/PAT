//
// Created by 李昊城 on 2019/11/10.
//
#include <stdio.h>
int main(void){
    char a;
    int n,m;
    scanf("%d %s",&n,&a);
    if(n%2==1)m=n/2+1;
    else m=n/2;
    for(int i=0;i<n;i++){
        printf("%c",a);
    }
    printf("\n");
    for(int j=2;j<m;j++){
        printf("%c",a);
        for(int i=0;i<n-2;i++){
            printf(" ");
        }
        printf("%c\n",a);
    }
    for(int i=0;i<n;i++){
        printf("%c",a);
    }



    return 0;
}

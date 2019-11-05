//
// Created by 李昊城 on 2019/11/3.
//
#include <stdio.h>

int main(void){
    int a[1010]={0};
    int i=0;
    int j,k;
    int count=0;
    while (scanf("%d%d",&j,&k)!=EOF){
        a[k]=j;

    }
    a[0]=0;
    for(int n=1;n<=1000;n++){
        a[n-1]=a[n]*n;
        a[n]=0;
        if(a[n-1]!=0)count++;
    }
    if(count==0){
        printf("0 0");
    } else {
        for (int n = 1000; n >=0; n--) {
            if (a[n] != 0) {
                printf("%d %d", a[n],n);
                count--;
                if (count != 0)printf(" ");
            }

        }
    }
    return 0;

}

//
// Created by 李昊城 on 2019/10/31.
//
#include <stdio.h>
int main(void){
    int result[5];
    int flag=1;
    int count=0;
    for(int i=0;i<=5;i++){
        result[i]=0;
    }
    int n;
    int a;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        if(a%5==0&&a%2==0){
            result[1]+=a;
        } else if(a%5==1){
            if(flag){
                result[2]+=a;
                flag=0;
            } else {
                result[2]-=a;
                flag=1;
            }
        }else if(a%5==2){
            result[3]++;
        } else if(a%5==3){
            result[4]+=a;
            count++;
        } else if(a%5==4){
            if(a>result[5]){
                result[5]=a;
            }
        }
    }
    if(result[1]==0){
        printf("N ");
    } else printf("%d ",result[1]);
    if(result[2]==0){
        printf("N ");
    } else printf("%d ",result[2]);
    if(result[3]==0){
        printf("N ");
    } else printf("%d ",result[3]);
    if(result[4]==0){
        printf("N ");
    } else printf("%.1f ",(double)result[4]/count);
    if(result[5]==0){
        printf("N");
    } else printf("%d",result[5]);

    return 0;
}

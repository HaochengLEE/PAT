//
// Created by 李昊城 on 2019/10/31.
//
#include <stdio.h>
int main(void){
    int result[5]={0};
    int flag=1,flag2=0;
    int count=0;

    int n;
    int a;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        if(a%5==0&&a%2==0){
            result[0]+=a;
        } else if(a%5==1){
            //这里使用一个flag2来做标记，因为若a1-a2等于0，按题目要求应该输出0，而不是N
            flag2=1;
            if(flag){
                result[1]+=a;
                flag=0;
            } else {
                result[1]-=a;
                flag=1;
            }
        }else if(a%5==2){
            result[2]++;
        } else if(a%5==3){
            result[3]+=a;
            count++;
        } else if(a%5==4){
            if(a>result[4]){
                result[4]=a;
            }
        }
    }
    if(result[0]==0){
        printf("N ");
    } else printf("%d ",result[0]);
    if(flag2==0){
        printf("N ");
    } else printf("%d ",result[1]);
    if(result[2]==0){
        printf("N ");
    } else printf("%d ",result[2]);
    if(result[3]==0){
        printf("N ");
    } else printf("%.1f ",(double)result[3]/count);
    if(result[4]==0){
        printf("N");
    } else printf("%d",result[4]);

    return 0;
}

//
// Created by 李昊城 on 2019/11/13.
//
#include<stdio.h>
//定义两个较大货币的值
const int Galleon=17*29;
const int Sickle=29;
int main(void){
    int g1,g2,s1,s2,k1,k2;
    scanf("%d.%d.%d %d.%d.%d",&g1,&s1,&k1,&g2,&s2,&k2);
    //换算成最小的货币单位
    int price=g1*Galleon+s1*Sickle+k1;
    int money=g2*Galleon+s2*Sickle+k2;
    int change=money-price;
    //小于零对前面加负号，然后取绝对值，因为负数不能参加除法和取余
    if(change<0){
        printf("-");
        change=-change;
    }

    printf("%d.%d.%d",change/Galleon,change%Galleon/Sickle,change%Sickle);

    return 0;

}

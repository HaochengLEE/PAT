//
// Created by 李昊城 on 2019/11/18.
//
#include <stdio.h>
int main(void){
    int num;
    int count=0;
    //定义两个数组存放权重和计算后的值可以避免swich语句
    int w[20]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    char change[15]={'1','0','X','9','8','7','6','5','4','3','2'};
    scanf("%d",&num);
    for(int n=0;n<num;n++){
        char a[20];
        int flag=0;
        int i=0,avg=0;
        scanf("%s",a);
        for(i;i<=16;i++){
            //如果不是数字就直接退出循环
            if(a[i]<='0'&&a[i]>='9'){
                break;
            }
            avg=avg+(a[i]-'0')*w[i];
        }
        //如果前面退出过循环则直接输出字符串
        if(i<17){
            printf("%s\n",a);
            ++count;

        } else {
            //判断最后一位是否符合要求
            if (change[avg%11]!=a[17]) {
                printf("%s\n",a);
                ++count;


            }
        }
    }


    if(count==0){
        printf("All passed");

    }


    return 0;
}

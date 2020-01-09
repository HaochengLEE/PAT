//
// Created by 李昊城 on 2019/12/3.
//

#include <stdio.h>
typedef struct phone{
    char[25] name;
    int month,dd,hh,mm;
    int state;
}rec[10010],temp;
int cmp(phone a,phone b){
    int s=strcmp(a.name,b.name);
    if(s!=0) return s<0;
    else if(a.month!=b.month) return a.month<b.month;
    else if(a.dd!=b.dd) return a.dd<b.dd;
    else if(a.hh!=b.hh) return a.hh<b.hh;
    else return a.mm<b.mm;
}
void get_fe(int on,int off,int &time,int &money){
    temp=rec[on]
}
int main(void){
    int[25] fe;
    phone[] list;
    int k=0,count;
    while (getchar()!='\n'){
        scanf("%d",&fe[k++]);
    }
    scanf("%d",&count);
    for(int i=0;i<count;i++){
        scanf("%d",list[i].name);
        scanf("%d",list[i].time);
        scanf("%d",list[i].state);
    }
    while (count--){

    }


    return 0;
}
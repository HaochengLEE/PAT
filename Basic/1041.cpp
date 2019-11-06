//
// Created by 李昊城 on 2019/11/6.
//
#include <stdio.h>
typedef struct{
    long long id;
    int sit1;
    int sit2;
}stu;

int main(void){
    stu arr[1010];
    long long count;
    int find;
    int sit;
    scanf("%d",&count);
    for(int i=0;i<count;i++){
        long long a;
        int b,c;
        scanf("%ld%d%d",&a,&b,&c);
        arr[i].id=a;
        arr[i].sit1=b;
        arr[i].sit2=c;
    }
    scanf("%d",&find);
    for(int i=0;i<find;i++){
        scanf("%d",&sit);
        for(int j=count;j>=0;j--){
            if(arr[j].sit1==sit){
                printf("%ld %d\n",arr[j].id,arr[j].sit2);
            }
        }
    }

    return 0;
}

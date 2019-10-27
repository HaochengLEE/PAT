//
// Created by 李昊城 on 2019/10/27.
//
#include <stdio.h>
int main(void){
    long long a,b,c;
    int count,start=0;
    scanf("%d",&count);
    int at[count];
    int ac=0;
    while (count--){
        scanf("%lld%lld%lld",&a,&b,&c);
        if(a+b>c){
            at[start]=1;

        } else {
            at[start]=0;
        }
        start++;
    }
    for(int i=1;i<=start;i++){
        if(at[ac])printf("Case #%d:true\n",i);
        else printf("Case #%d:false\n",i);
        ac++;
    }
    return 0;

}

//#include <stdio.h>
//int main(void){
//    long long a,b,c;
//    int count,start=1;
//    scanf("%d",&count);
//    while (count--){
//        scanf("%lld%lld%lld",&a,&b,&c);
//        if(a+b>c){
//            printf("Case #%d: true\n",start);
//        } else {
//            printf("Case #%d: false\n",start);
//        }
//        start++;
//    }
//    return 0;
//
//}

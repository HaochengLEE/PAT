//
// Created by 李昊城 on 2019/11/1.
//

#include <stdio.h>
int main(void){
    char logo[3]={'C','J','B'};
    int n;
    char aa,bb;
    //记录胜平负
    int a[3]={0},b[3]={0};
    //记录用什么赢的 C J B
    int countA[3]={0},countB[3]={0};
    //记录
    int resultA=0,resultB=0;




    scanf("%d",&n);
    for(int i=0;i<n;i++){
        getchar();
        scanf("%c %c",&aa,&bb);
        if(aa=='C'){
            if(bb=='J'){
                a[0]++;
                b[2]++;
                countA[0]++;

            } else if(bb=='B'){
                a[2]++;
                b[0]++;
                countB[2]++;
            } else{
                a[1]++;
                b[1]++;
            }

        } else if(aa=='J'){
            if(bb=='C'){
                a[2]++;
                b[0]++;
                countB[0]++;
            } else if(bb=='B'){
                a[0]++;
                b[2]++;
                countA[1]++;
            } else {
                a[1]++;
                b[1]++;
            }
        } else if(aa=='B'){
            if(bb=='J'){
                a[2]++;
                b[0]++;
                countB[1]++;
            } else if(bb=='C'){
                a[0]++;
                b[2]++;
                countA[2]++;
            } else{
                a[1]++;
                b[1]++;
            }
        }

    }
   printf("%d %d %d\n",a[0],a[1],a[2]);
   printf("%d %d %d\n",b[0],b[1],b[2]);
   for(int i=0;i<3;i++){
       if(countA[i]>=countA[resultA]){
           resultA=i;

       }
       if(countB[i]>=countB[resultB]){
           resultB=i;

       }
   }

   printf("%c %c",logo[resultA],logo[resultB]);
    return 0;
}


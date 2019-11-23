//
// Created by 李昊城 on 2019/11/22.
//
#include <stdio.h>
#include <string.h>
void reverse(char a[]){
    int len=strlen(a);
    for(int i=0;i<len/2;i++){
        int temp=a[i];
        a[i]=a[len-1-i];
        a[len-1-i]=temp;
    }
}
int main(void){
    char a[110],b[110],c[110]={0};
    scanf("%s%s",a,b);
    //因为个位是第1位，所以判断奇偶位需要先把字符串倒过来
    reverse(a);
    reverse(b);
    int lenA=strlen(a);
    int lenB=strlen(b);
    //选最长的串长度来做for条件
    int len=lenA>lenB?lenA:lenB;
    for(int i=0;i<len;i++){
        //因为两个字符串不一样，所以要把短的空值赋成0，方便进行加减计算，同时把字符串换算成整型
        int numA=i<lenA?a[i]-'0':0;
        int numB=i<lenB?b[i]-'0':0;
        if(i%2==0){
            int k=(numA+numB)%13;
            if(k<10){
                c[i]=k+'0';
            } else{
                //超过10的
                switch (k){
                    case 10:{
                        c[i]='J';
                        break;
                    }
                    case 11:{
                        c[i]='Q';
                        break;
                    }
                    case 12:{
                        c[i]='K';
                        break;
                    }

                }
            }
        } else{
            int r=numB-numA;
            if(r<0){
                r+=10;
            }
            c[i]=r+'0';

        }
    }
    reverse(c);

    puts(c);

    return 0;
}

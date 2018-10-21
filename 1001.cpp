#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int i=a;
    int k=0;//count
    while(i>1){
        if(i%2==0){
            i=i/2;
            k++;
        }


        else{
            i=(3*i+1)/2;
            k++;


        }
    }
    printf("%d",k);


    return 0;
}
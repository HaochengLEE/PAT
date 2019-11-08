//
// Created by 李昊城 on 2019/11/7.
//
#include <stdio.h>
struct Student {
    char name[20];
    char id[20];
    int score;
}student,MAX,MIN;//学生个体和最高分学生和最低分学生，这样避免了使用数组来存储学生

int main(void){

    int count;
    int flag1=0,flag2=100;
    scanf("%d",&count);
    MAX.score=-1;
    MIN.score=101;

    for(int i=0;i<count;i++){

        scanf("%s%s%d",student.name,student.id,&student.score);
        if(student.score>MAX.score){
            MAX=student;

        }
        if(student.score<MIN.score){
            MIN=student;
        }

    }
    for(int i=count;i>=0;i--){

    }
    printf("%s %s\n",MAX.name,MAX.id);
    printf("%s %s\n",MIN.name,MIN.id);


}

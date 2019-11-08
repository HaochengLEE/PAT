//
// Created by 李昊城 on 2019/11/8.
//
#include <stdio.h>
struct Person{
    char name[6];
    int year;
    int month;
    int day;
}person,Oldest,Youngster;
//Ruling用来更新Oldest和Youngster
void Ruling(Person person){
    if(person.year<Oldest.year){
        Oldest=person;
    } else if(person.year==Oldest.year&&person.month<Oldest.month){
        Oldest=person;
    } else if(person.year==Oldest.year&&person.month==Oldest.month&&person.day<Oldest.day){
        Oldest=person;
    }
    if(person.year>Youngster.year){
        Youngster=person;
    } else if(person.year==Youngster.year&&person.month>Youngster.month){
        Youngster=person;
    } else if(person.year==Youngster.year&&person.month==Youngster.month&&person.day>Youngster.day){
        Youngster=person;
    }

}
int main(void){
    int count;
    int flag=0;
    Oldest.year=2015;Oldest.month=13;Oldest.day=32;
    Youngster.year=1813;Youngster.month=0;Youngster.day=0;
    scanf("%d",&count);
    for(int i=0;i<count;i++){
        scanf("%s %d/%d/%d",person.name,&person.year,&person.month,&person.day);
        if(person.year>1814&&person.year<2014){flag++;Ruling(person);}
        else if(person.year==1814&&person.month>9){flag++;Ruling(person);}
        else if(person.year==1814&&person.month==9&&person.day>=6){flag++;Ruling(person);}
        else if(person.year==2014&&person.month<9){flag++;Ruling(person);}
        else if(person.year==2014&&person.month==9&&person.day<=6){flag++;Ruling(person);}


    }
    if(flag==0){
        printf("0\n");
    } else{
        printf("%d ",flag);
        printf("%s %s",Oldest.name,Youngster.name);
    }

    return 0;
}

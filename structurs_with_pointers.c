#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student{
    char name[50];
    int age;
    int roll_no;
};
int main(){
    struct student *s1;
    s1 = (struct student*) malloc(sizeof(struct student));
    if(s1!= NULL){
        strcpy(s1->name,"sudeep");
        s1 -> age = 18;
        s1 -> roll_no = 104;
        printf("Name: %s\nAge: %d\nroll_no: %d",s1->name,s1->age,s1->roll_no);
        free(s1);
    }
    else
        printf("Memory allocation failed");
}

#include<stdio.h>
#include<string.h>
struct student{
    char name[50];
    int age;
};
int input_details(struct student *s1){
    printf("ENTER NAME:");
    scanf("%s",s1->name);
    printf("ENTER AGE:");
    scanf("%d",&s1->age);
    
}
int display_details(struct student s1){
    printf("STUDENT DETAILS");
    printf("%s ",s1.name);
    printf("%d ",s1.age);
}
int main(){
    struct student s1;
    input_details(&s1);
    display_details(s1);
}

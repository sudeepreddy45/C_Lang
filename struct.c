#include<stdio.h>
#include<string.h>
struct student{
    char name[50];
    int age;
    int roll_no;
};
int main(){
    struct student s1;
    struct student s2;
    strcpy(s1.name,"Sudeep");
    strcpy(s2.name,"santhan");
    s1.age = 18;
    s2.age = 19;
    s1.roll_no = 104;
    s2.roll_no = 105;
    printf("%s ",s1.name);
    printf("%d ",s1.age);
    printf("%d ",s1.roll_no);
    
    printf("%s ",s2.name);
    printf("%d ",s2.age);
    printf("%d ",s2.roll_no);
    
}

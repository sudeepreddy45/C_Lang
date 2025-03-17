#include<stdio.h>
#include<string.h>
struct student{
    char name[30];
    int age;
    int roll_no;
};

int data(struct student s1){
    printf("%s ",s1.name);
    printf("%d ",s1.age);
    printf("%d ",s1.roll_no);
}

int main(){
    struct student s1;
    strcpy(s1.name,"sudeep");
    s1.age = 18;
    s1.roll_no = 104;
    // or we can initialize like
    // struct student s1 = {"sudeep",18,104};
    data(s1);
}

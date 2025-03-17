#include<stdio.h>
#include<string.h>
struct student{
    char name[50];
    int age;
    int roll_no;
};
int main(){
    int i;
    struct student students[2] = {
        {"Sudeep",18,104},{"Santhan",18,105}
    };
    for(i=0;i<2;i++){
        printf("Student: %d\nName:%s,age:%d,roll no.:%d\n",i+1,students[i].name,students[i].age,students[i].roll_no);
    }
}

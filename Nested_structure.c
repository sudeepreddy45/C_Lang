#include<stdio.h>
#include<string.h>
struct address{
    char city[50];
    int zip;
};
struct student{
    char name[50];
    int age;
    int roll_no;
    struct address s1_address;
};
int main(){
    struct student s1 = {"Sudeep",18,104,{"Kadapa",516001}};
    printf("Name: %s\n",s1.name);
    printf("Age: %d\n",s1.age);
    printf("roll_no: %d\n",s1.roll_no);
    printf("city: %s\n",s1.s1_address.city);
    printf("zip: %d\n",s1.s1_address.zip);
}

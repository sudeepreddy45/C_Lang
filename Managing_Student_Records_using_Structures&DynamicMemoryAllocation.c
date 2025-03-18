#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student{
    char name[50];
    int age;
    int roll_no;
};
int main(){
    int n;
    scanf("%d",&n);
    int i;
    struct student *s = (struct student*)malloc(n*sizeof(struct student));
    for(i=0;i<n;i++){

        printf("%d Name: ",i+1);
        scanf("%s",s[i].name);
        printf("age: ");
        scanf("%d",&s[i].age);
        printf("roll_no: ");
        scanf("%d",&s[i].roll_no);
        
    }
    if(s!=NULL){
        for(i=0;i<n;i++){
        printf("Students:\n             -------------- \n%d. Name : %s\nAge : %d\nroll_no : %d\n",i+1,s[i].name,s[i].age,s[i].roll_no);
        }
    }
    else
        printf("Memory allocation failed");
}

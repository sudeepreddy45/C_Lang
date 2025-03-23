#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int rem;
    int x = n;
    int sum =0;
    while(x>0){
        rem = x%10;
        sum = sum*10 + rem;
        x = x/10;
    }
    if(sum == n)
        printf("It is palindrome");
    else
        printf("Not a palindrome");
}

#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int rem;
    int x = n;
    int digit = 0;
    int sum =0;
    while(x>0){
        rem = x%10;
        sum = sum + rem*pow(2,digit);
        x = x/10;
        digit++;
    }
    printf("the binary:%d to decimal:%d",n,sum);
}

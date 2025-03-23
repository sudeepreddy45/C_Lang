#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int x = n;
    int count = 0;
    int rem;
    int i;
    int sum = 0;
    while(x!=0){
        rem = x%10;
        x = x/10;
        count++;
    }
    int y = n;
    int re;
    while (y > 0) {
            re = y % 10;
            sum = sum + pow(re, count);
            y = y / 10;
        }
    
    if( sum == n)
        printf("YES");
    else
        printf("NO");
    
}

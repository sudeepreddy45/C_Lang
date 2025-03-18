#include<stdio.h>
int diamond_pattern(int n);
int diamond_pattern(int n){
    int i,j,k;
    
    for(i=1;i<=n;i++){
        for(k=n-i;k>0;k--)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
    for(i=n;i>0;i--){
        for(k=n-i;k>0;k--)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
}
int main(){
    int n;
    scanf("%d",&n);
    diamond_pattern(n);
}

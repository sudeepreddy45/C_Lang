#include<stdio.h>
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    int temp;
    int x_i = x;
    int y_i = y;
    while(x_i!=y_i){
        if(x_i<y_i)
            y_i = y_i - x_i;
        else
            x_i = x_i - y_i;
        temp = x_i;
    }
    printf("the GCD of %d and %d is %d",x,y,temp);
}

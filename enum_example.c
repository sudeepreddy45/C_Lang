#include<stdio.h>
enum months{
    J,F,M,A,Ma,Ju,Jul,Au,S,O,N,D
};
int main(){
    enum months present;
    present = M;
    printf("the present month number is %d",present + 1);
}

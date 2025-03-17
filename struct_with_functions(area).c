#include<stdio.h>
struct area_data{
    int len;
    int bre;
};
int area(struct area_data d){
    return d.len * d.bre;
}
int main(){
    struct area_data d;
    d.len = 10;
    d.bre = 20;
    int z = area(d);
    printf("%d",z);
}

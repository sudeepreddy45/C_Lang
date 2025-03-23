#include<stdio.h>
#include<string.h>
int main(){
    char str[50] = "Sudeep";
    int len = strlen(str);
    char rev[len];
    for (int i = 0; i < len; i++) {
        rev[i] = str[len - 1 - i];
    }
    printf("reverse of string is : %s",rev);
}

#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char str[50];
    cin >> str;
    int len = strlen(str);
    int count = 0;
    int i;
    for (int i = 0; i < len; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            count++;
        }
    }
    cout << "The no. of Vowels are: " << count;
    
}

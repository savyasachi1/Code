#include<stdio.h>
#include<stdint.h>
#include<string.h>

void print(char* str, size_t n);
void printrev(char* str, size_t n);
void reverse(char* str, size_t n);

int32_t main()
{
    char str[]="Savya";
    size_t n = sizeof(str)/sizeof(str[0]);
    printrev(str, n);
    print(str, n);
    reverse(str, n);
    print(str, n);
    return 0;
}

void print(char* str, size_t n){
    for(int32_t i = 0;i<n-1;i++){
        printf("%c",str[i]);
    }
    printf("\n");
}

void printrev(char* str, size_t n){
    for(int32_t i = n-2;i>=0;i--){
        printf("%c",str[i]);
    }
    printf("\n");
}

void reverse(char* str, size_t n){
    for(int i=0, j=n-2;i<j;i++,j--){
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}
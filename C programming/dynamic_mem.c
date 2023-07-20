#include<stdio.h>
#include<stdlib.h>

int main(){
    int a=10;
    int *ptr= ((int*)malloc(sizeof(int)));
    ptr=&a;
    printf("%d\n",ptr);
    printf("%d\n",*ptr);
    int b[]={2,4,6};
    int *prr=(int*)calloc(3,sizeof(int));
    prr=b;
    for(int i=0;i<5;i++){
        printf("%d\n",*(prr+i));
    }
    // for(int i=0;i<5;i++){
    //     printf("%d\n",prr+i);
    // }
}
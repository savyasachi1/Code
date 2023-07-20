#include<stdio.h>

int main(){
    int a=10;
    int *p=&a;
    printf("The value at p is %d\n",p);
    printf("Size of int is %d\n",sizeof(int));
    printf("The value at p is %d\n",p+1);
    printf("The value at p is %d\n",p-1);
    printf("The value at a is %d\n",a);
    *p = 20;
    printf("Changed value at p is %d\n",*p);
    printf("Changed value of a is %d\n",&a);
    int **q=&p;
    printf("The value at q is %d\n",q);
    int ***r=&q;
    printf("The value at r is %d\n",r);
    printf("The value at q is %d\n",*r);
    printf("The value at p is %d\n",**r);
    printf("The value of a is %d\n",***r);
    return 0;
}
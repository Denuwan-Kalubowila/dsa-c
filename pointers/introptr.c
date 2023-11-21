#include<stdio.h>

int main(){
    int a;
    int *ptr;
    a=4;

    ptr=&a;

    printf("%d\n",a);
    printf("%d\n",ptr);
    printf("%d\n",&a);
    printf("%d\n",&ptr);
    printf("%d\n",*ptr);
    *ptr=12;//de-refferncing
    printf("%d\n",a);
    printf("%d\n",ptr);
    printf("%d\n",&a);
    printf("%d\n",&ptr);
    printf("%d\n",*ptr);

    int b=123;
    *ptr=b;
    printf("%d\n",a);
    printf("%d\n",ptr);
    printf("%d\n",&a);
    printf("%d\n",&ptr);
    printf("%d\n",*ptr);
    
}
#include<stdio.h>

int main(){
    int a;
    int *ptr;
    ptr=&a;

   
    printf("%d\n",ptr);//10484
    printf("%d\n",*(ptr+1));
    printf("%d\n",ptr-1);//10480
    
}
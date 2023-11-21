#include<stdio.h>

int main(){
    int a=1025;
    int *p;
    p=&a;

   
    printf("size of int %d\n",sizeof(int));//10484
    printf("address= %d,value=%d\n",p,*p);
    printf("address= %d,value=%d\n",p+1,*(p+1));

    char *p1;
    p1=(char*)p;
    printf("size of int %d\n",sizeof(char));//10484
    printf("address= %d,value=%d\n",p1,*p1);//1025=00000000 00000000 00000100 |00000001|
    printf("address= %d,value=%d\n",p1+1,*(p1+1));//1025=00000000 00000000 |00000100| 00000001


    //void pointer cannot dereferencing

    void *p2;
    p2=p;
    printf("address= %d \n",p2) ;   
}
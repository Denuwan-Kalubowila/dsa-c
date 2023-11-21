#include<stdio.h>

int main(){
    int a=1024;
    int *p;
    p=&a;
    int **q;
    q=&p;
    int ***r;
    r=&q;

   
    printf("%d %d \n",p,*p);//10484
    printf("%d %d %d\n",q,*q,*(*q));
    printf("%d %d %d %d\n",r,*r,*(*r),*(*(*r)));//10480

    **q=*p+12;
    printf("%d %d \n",p,*p);//10484
    printf("%d %d %d\n",q,*q,*(*q));
    printf("%d %d %d %d\n",r,*r,*(*r),*(*(*r)));//10480

    ***r= **q + *p+2;
    printf("%d %d \n",p,*p);//10484
    printf("%d %d %d\n",q,*q,*(*q));
    printf("%d %d %d %d\n",r,*r,*(*r),*(*(*r)));//10480

    a=***r *10;
    printf("%d %d \n",p,*p);//10484
    printf("%d %d %d\n",q,*q,*(*q));
    printf("%d %d %d %d\n",r,*r,*(*r),*(*(*r)));//10480

    a=**(*r)/ *(*q);
    printf("%d %d \n",p,*p);//10484
    printf("%d %d %d\n",q,*q,*(*q));
    printf("%d %d %d %d\n",r,*r,*(*r),*(*(*r)));//10480

}
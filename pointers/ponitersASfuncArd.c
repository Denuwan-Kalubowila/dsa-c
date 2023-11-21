#include<stdio.h>

int  Increment(int* p){
    *p +=1;
}
int  Total(int *m ,int *n,int *o){
    *o=*m+*n;
}

int main(){
    int a=10;
    int p=200;
    int q=300;
    int sum=0;
    Total(&p,&q,&sum);
    Increment(&a);
    printf("Num Incr %d",a);
    printf("Num Incr %d",sum);

}

// int  Increment(int a){
//     return  a+=1;
// }

// int main(){
//     int a=10;
//     int p=Increment(a);
//     printf("Num Incr %d",p);

// }
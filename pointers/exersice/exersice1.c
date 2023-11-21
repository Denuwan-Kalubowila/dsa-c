#include <stdio.h>
#include <stdlib.h>

int* Add(int *a,int *b){
    int *c;
    c=(int *) calloc(3,sizeof(int));
    *(c+1)=(*a)+(*b);
    printf("%d c location :",c+1);
    printf("%d c location :",*c);
     printf("%d c location :",*(c+2));

    return c+1;

}
void print(){
    printf("Hello Denuwan");
}

int main(){
    int a=10,b=10;
    int *tot = Add(&a,&b);
    print();
    printf("%d",*tot);
}
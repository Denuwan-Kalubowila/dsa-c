#include <stdio.h>
#include <stdlib.h>

int Add(int a,int b){
    return a+b;
}
void printHello(char *name){
    printf("Hello %s",name);
}

int main(){
    int c;
    int c1;
    int (*p)(int,int);//create function pointer
    void (*q)(char *);
    q=printHello;
    p = Add;
    c = (*p)(30,20);
    c1 = (p)(30,20);
    q("Denuwan");


    printf("%d %d ",c,c1);

}
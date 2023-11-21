#include<stdio.h>

int main(){
    int b=10;
    int *p;
    p=&b;
    int a[3]={10,20,30};
    printf("%d  \n",*a);//10484
    int * arrptr= a;
    
    printf("%d %d \n",p,*p);//10484
    printf("%d  \n",a);//10484
    printf("%d  \n",*a);//10484
    printf("%d %d \n",arrptr+1,*(arrptr+1));//10484

    for (int i =0;i<3;i++){
        printf("%d  \n",(a+i));//10484
        printf("%d  \n",&a[1]);//10484
        printf("%d  \n",*(a+i));//10484
        printf("%d  \n",a[i]);//10484

    }


}
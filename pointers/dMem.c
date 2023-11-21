#include <stdio.h>
#include <stdlib.h>

int main(){
    // int a;
    // int *p;
    // p=(int*)malloc(sizeof(int));
    // *p=100;
    // free(p);
    // p=(int*)malloc(sizeof(int));
    // *p=200;
    // printf("%d\n",&a);
    // printf("%d\n",p);
    // printf("%d\n",*p);

    int n;
    printf("Enter sise of array \n");
    scanf("%d",&n);
    int *A;
    A=(int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        *(A+i)=i+1;
    }
    // for(int i=0;i<n;i++){
    //     printf("%d ",*(A+i));
    //      printf("%d \n",(A+i));
    // }

    int *B=(int *) realloc(A,2*n*sizeof(int));
    printf("new %d and pre %d \n",A,B);
    for(int i=0;i<n*2;i++){
        printf("%d ",*(B+i));
        printf("%d ",(B+i));
    }


    // int n;
    // printf("Enter sise of array \n");
    // scanf("%d",&n);
    // int *A;
    // A=(int *)calloc(n,sizeof(int));
    // // 
    // for(int i=0;i<n;i++){
    //     printf("%d ",*(A+i));
    //      printf("%d ",(A+i));
    // }

}
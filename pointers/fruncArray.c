#include<stdio.h>

int sumOfArray(int* B,int* length){
    int sum=0;
    for (int i=0;i< *length;i++){
        sum +=2* (*(B+i));//a[i]
    }
    return sum;
}

int main(){
    int A[]={3,4,3};
    int size = sizeof(A)/sizeof(A[0]);
    int total=sumOfArray(&A,&size);
    printf("%d is total ",total);

}
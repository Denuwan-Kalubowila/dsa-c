#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// int A(int a,int b){
//     return a+b;
// }
// void printHello(){
//     printf("Hello");
// }
// void printHelloWorld(void (*ptr)()){
//     ptr();
//     printf(" World");

// }
int a_compare(int a,int b){
    if(abs(a)>abs(b)) return 1;
    return -1;

}
int compare(int a,int b){
    if(a>b) return 1;
    return -1;
}
int sort(int *arr,int n,int (*callback)(int,int)){
    int i,j,temp;
    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            if (callback(arr[j],arr[j+1])>0){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

}

int main(){
    int arr1[]={8,-10,9,2,-1,3};
    sort(arr1,6,a_compare);
    for(int i=0;i<6;i++) printf("%d ",arr1[i]);

}
#include <stdio.h>
#include <string.h>

int main(){
    int B[2][3]={{1,2,3},{4,5,6}};
    int (*c)[3]=B;
    printf("%d\n",c);
    printf("%d\n",(c+1));
    printf("%d\n",B);
    printf("%d\n",B+1);
    printf("%d\n",*c);
    printf("%d\n",(*c+1));
    printf("%d\n",*B);
    printf("%d\n",*B+1);
    printf("%d\n",*(B+1));
    printf("%d\n",*(*(B+1)+2));
    printf("%d\n",*(*(B)+2));
    printf("%d\n",*(*B+1));

    int i=0;
    int j=0;
    for(i=0;i<sizeof(B)/sizeof(B[0]);i++){
        for(j=0;j<sizeof(B[0])/sizeof(B[0][0]);j++){
            // printf("%d \n",B[i][j]);
            printf("%d \n",*(*B+i)+j);
            // printf("%d \n",*(B[i]+j));
        }
    }
}
#include <stdio.h>
#include <string.h>

 void print(char* C){
        int i=0;
        while(*(C+i) != '\0'){
            printf("%c",*(C+i));
            i++;
        }
        printf("\n");
}
int main(){

   
    // char C[4];
    // C[0]='J';
    // C[1]='O';
    // C[2]='H';
    // C[3]='N';
    // C[4]='\0';


    // char C[20]="Denuwan";

    char C[7]="Denuwan";//size is 8 not 7
    printf("%s  \n",C);
    printf("len %d \n",strlen(C));
    printf("size of char array %d\n",sizeof(C));
    print(C);

    char * b="BbBbBbBbBb";
    b[0]='q';
    print(b);
}
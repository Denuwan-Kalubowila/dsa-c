#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int cash=100;
void play(int bet){
    char *c=(char *)malloc(3*sizeof(char));
    *c='J';
    *(c+1)='K';
    *(c+2)='Q';
    printf("Shuffling...\n");
    int i;
    srand(time(NULL));
    for(i=0;i<5;i++){
        int x=rand()%3;
        int y=rand()%3;
        int temp=c[x];
        c[x]=c[y];
        c[y]=temp;
    }
    int playerGues;
    printf("what is the Q possition? \n");
    scanf("%d",&playerGues);
    if (c[playerGues-1]=='Q'){
        printf("you win %d \n",bet*3);
        cash +=(bet*3);
    }else{
        printf("you loss %d \n",bet);
        cash -=(bet);
    }
    printf("Now cash %d \n",cash);
    free(c);//deallocate c
}
int main(){
    int bet;
    while(cash>0){
        printf("What is your Bet? ");
        scanf("%d",&bet);
        if (bet==0||bet>cash) break;
        play(bet);
        
    }

}
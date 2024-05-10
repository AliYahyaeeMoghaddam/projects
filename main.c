#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

   int x,y;

   srand(time(0));
   y=rand()%1000;


   printf("I have a number between 1 and 1000.\n Can you guess my number?\n Please type your first guess.\n");

   for(int i=1;i<=10;i++){
      scanf("%d", &x);

      if(x==y)
        printf("Excellent! You gussed the number!\n would you like to play again (y or no)?");
      else if(x<y)
        printf("Too low. Try again.\n");
        else
            printf("Too high, Try again.\n");

        if(x==y)
            printf("Either you know the secret or you are lucky!");
        else
            printf("You should be able to do better!");


   }
     if(x!=y){
    for(int i=1;i<=10;i++){
      scanf("%d", &x);

      if(x==y)
        printf("Excellent! You gussed the number!\n would you like to play again (y or no)?");
      else{
        if(x<y)
        printf("Too low. Try again.");
        else
            printf("Too high, Try again.");
        }
    }
}
}

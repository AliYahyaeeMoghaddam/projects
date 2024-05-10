#include <stdio.h>
#include <stdlib.h>

int main(){

   int x,y=0,sum,t=1;
   double ave;

   while(x!=-99){

    scanf("%d", &x);
    if(x<=-20 && x>=60){
        x=0;
        y++;
    }

    t++;
    sum+=x;
    ave=sum/t;

   }

   printf("ave=%lf and %d",ave,y);

   return 0;
}


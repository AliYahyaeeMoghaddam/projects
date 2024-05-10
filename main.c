#include<stdio.h>
#include<string.h>

insertionSort(char name[][50], int length);

main(){

   const int length=10;
   int i,j;
   char name[length][50];

   for(i=0;i<length;i++){
      scanf("%s",name[i]);
   }

   insertionSort(name,length);

   for(i=0;i<length;i++){
      printf("%s\n",name[i]);
   }
}

insertionSort(char name[][50], int length){

    char s[50];

    for(int i=0;i<length;i++){
        for(int j=i+1;j<length;j++){
            if(strcmp(name[i],name[j])>0){
                strcpy(s,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],s);
         }
      }
   }

}


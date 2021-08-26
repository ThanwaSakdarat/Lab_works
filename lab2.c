#include <stdio.h>
int main(){
   int a,b,r;
   printf("Enter the length of sqaure :");
   scanf("%d",&r);
   for(a=1 ; a<=r ; a++){
      for(b=1; b<=r ;b++){
         if(a == 1 || a==r || b==1 || b==r){
            printf("*");
         }
         else{
            printf(" ");
         }
      }
      printf("\n");
   }
   
   return 0;
}
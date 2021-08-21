#include <stdio.h>

//Find factors of input and sum up

int main(){
    int number,fac,total=0;
    
    for(number=1 ; number<=10000; number++){
        for(fac=1 ; fac<number; fac++){
            if(number%fac==0){
                total = total + fac;
            } 
        }
        if(total==number){
            printf("%d\n",total);
        }
        total=0;
    }    
           
return 0;    
}    

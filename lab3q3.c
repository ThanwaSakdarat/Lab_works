#include <stdio.h>

//Make butterfly shape out of input

int main(){
    int number,symb,space,row,a;
    printf("Enter positive number from 2 or higher than that : ");
    scanf("%d",&number);
    
    if(number <2){
        printf("Please enter positive number from 2 or higher than that!\n");
    }
    
    else if(number>=2){
        for(row = 0; row<number; row++){
            for(symb = 0;  symb<row ; symb++){
                printf("*");
            }
            for(space=1; space<=(2*number-1)-2*row ; space++){
                printf(" ");
            } 
            for(symb = 0;  symb<row ; symb++){
                printf("*");
            }
            printf("\n");
        }
    
        for(a=0 ; a<(2*number)-1 ; a++){
            printf("*");
        }    
        printf("\n");
        
        for(row=number-1; row>0 ; row--){
            for(symb=0; symb<row ; symb++){
                printf("*");
            }       
            for(space=0; space<(2*number-1)-2*row ; space++){
                printf(" ");
            } 
            for(symb = 0;  symb<row ; symb++){
                printf("*");
            }
        printf("\n");
        }
    }
    return 0;
} 
    



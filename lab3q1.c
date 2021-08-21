#include <stdio.h>

//Find total sum of all digits from input
   
int main(){
    int number,r,s,total=0,total2=0;
    printf("Enter positive number: ");
    scanf("%d",&number);
    
    if(number>0){
        while(number>0){
            r = number%10;
            total= total+r;
            number = number/10;
        }
        if(total>=10){
            while(total>0){
                    s = total%10;
                    total2 = total2+s;
                    total = total/10;
                }
                if(total2<10){
                    printf("%d",total2);
                }
        }
        else if(total<10){
            printf("%d",total);
        }
    }


    else if(number==0){
        printf("%d",number);
    }

    else{
        printf("Please enter postive number");
    }
    return 0;
}
   

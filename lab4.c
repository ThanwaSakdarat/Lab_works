#include <stdio.h>
#include <math.h>
int main(){
    float a,b,c,formula,s,x;
    printf("Enter length of three sides of triangles: ");
    scanf("%f %f %f",&a,&b,&c);
    if(a>0 && b >0 && c>0){
        if(a+b>c && a+c>b && b+c>a){
            s = (a+b+c)/2;
            x = s*(s-a)*(s-b)*(s-c);
            formula = sqrt(x);
            printf("Area of the triangle is %.2f\n",formula);
        }
        else{
            printf("Can\'t create triangular shape\n ");
        }
    }
    else if(a<=0 || b<=0 || c<=0){
        printf("Please enter positive number\n");
    }
    else{
        printf("Please enter positive number\n");
    }
    return 0;
}
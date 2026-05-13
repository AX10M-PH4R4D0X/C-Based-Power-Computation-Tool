#include <stdio.h>
#include <stdlib.h>

float exponentiation (float x,int y) ;

int main () {

    float base,result;
    int exponent;
    exponent=0;

    printf("Enter values for Base and exponent\n");
    scanf("%f%d",&base,&exponent);

    result=exponentiation(base,exponent);

    printf("\nResult = %.2f\n",result);


    return 0 ;
}


    
float exponentiation(float x , int y) {

        float result = 1.0;
  
    int i;

    if (y < 0) {
      
        for (i = 0; i < -y; i++) {
          
            result *= 1/x;
      
        }
      
        result = 1.0 / result;
      
    } else {
      
        for (i = 0; i < y; i++) {
          
            result *= x;
          
        }
      
    }

    return result;
}

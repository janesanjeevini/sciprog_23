#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int factorial(int n);

int factorial(int n){

        if(n<0){

            printf("negative number entered");
            return -1;
        }
        else if (n==0)
        {
            return 1;
        }
        
        else
            return n*factorial(n-1);
}
int main(void){

    int i,order;
    
    double e=1.0, *term;

   
    printf("Enter required polynomial order\n");
    if(scanf("%d",&order)!=1){
        printf("Didn't enter a number\n");
        return -1;
    }
    
    term= (double *)malloc(order*sizeof(double));
    for(i=0;i<order;i++){
        term[i]=1.0/(double)factorial(i+1);\
        
        e+=term[i];
    }

    printf("The estimated value of e^%d using Taylor series is %lf\n",order,e);
    printf("Actual value of e^15 is %lf\n", exp(1));
    printf("The difference between estimated and actual values is %lf\n",e-exp(1));

  
    free(term);
    return 0;
}


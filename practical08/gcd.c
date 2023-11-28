#include<stdio.h>


int recursive(int a, int b){

    if(b==0)
        return a;

     return recursive(b,a%b);
}

int iterative(int a, int b){


    int temp;
    while (b>0){

        temp=a;
        a=b;
        b=temp%b;
    }
    
    return a;
}



int main(void){

    printf("Enter two integers\n");
    int a,b;
    scanf("%d %d",&a,&b);
    printf("The gcd using iterative is %d\n", iterative(a,b));
    printf("The gcd using recursive is %d\n", recursive(a,b));
    return 0;
}

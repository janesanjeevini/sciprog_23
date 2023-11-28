7.1 

#include <stdio.h>
#include <stdlib.h>

int *allocate(int n){
    int *p;
    p=(int *)malloc(n*sizeof(int));
    return p;
}

void fillwithones(int *array, int n){
    int i=0;
    for(;i<n;i++){
        array[i]=1;
    }
}

void printarray(int *array, int n){
    int i=0;
    for(;i<n;i++){
        printf("a[%d] = %d\n",i,array[i]);
    }
}

void freeArray(int *array){
    free(array);
}

int main(void){

    int n, *array;
    printf("Enter size of array\n");
    if(scanf("%d",&n)!=1){
        printf("Enter a number");
        return -1;
    }

    array=allocate(n);
    fillwithones(array,n);
    printarray(array,n);
    freeArray(array);
    return 0;
}

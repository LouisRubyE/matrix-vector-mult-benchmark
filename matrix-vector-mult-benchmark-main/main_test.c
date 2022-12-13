#include <stdio.h>
#include <stdlib.h>
#include "mylib/mylib.h"

int main(){
    int Q, i;
    printf("enter the size of matrix:\n");
    scanf("%d", &Q);
    
    if(Q <= 1){
        printf("Error, N > 1\n");
        return 0;
    }
    else{
    int *matrix = (int *) malloc(Q*Q*sizeof(int));
    int *vector = (int *) malloc(Q*sizeof(int));
    int *result = (int *) malloc(Q*sizeof(int));

    printf("enter matrix values:\n");
    for(i = 0; i < Q*Q; i++){
        scanf("%d", &matrix[i]);
    }
    printf("matrix = ");
    printMat(matrix, Q);

    printf("\nenter vector values:\n");
    for(i = 0; i < Q; i++){
        scanf("%d", &vector[i]);
    }
    printf("\nvector = ");
    printVec(vector, Q);

    matVecMult(matrix, vector, result, Q);

    printf("\nresult = ");
    printVec(result, Q);

    free(matrix);
    free(vector);
    free(result);
    }
    return 0;
}
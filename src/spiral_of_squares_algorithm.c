#include <stdio.h>
#include <stdlib.h>

void full_the_matrix(int **matrix, int n);
void output_the_matrix(int **matrix, int n);

int main(){
    int size;
    printf("Please, enter a size of your matrix:\n");
    if(scanf("%d", &size) == 1){
        int **matrix = malloc(size * sizeof(int *));
        for(int i=0; i<size; i++){
            matrix[i] = malloc(size * sizeof(int));
        }

        full_the_matrix(matrix, size);
        output_the_matrix(matrix, size);

        for(int i=0; i<size; i++){
            free(matrix[i]);
        }
        free(matrix);
    }
    else{
        printf("Incorrect size");
    }
    return 0;
}

void full_the_matrix(int **matrix, int n){
    int num = 1;
    for(int k=0; k<n-1; k++){
        for(int i=k; i<n-1-k; i++){
            matrix[i][k] = num * num;
            num += 1;
        }
        for(int j=k; j<n-k-1; j++){
            matrix[n-k-1][j] = num * num;
            num +=1;
        }
        for(int i=n-k-1; i>k; i--){
            matrix[i][n-k-1] = num * num;
            num += 1;
        }
        for(int j=n-k-1; j>k; j--){
            matrix[k][j] = num * num;
            num += 1;
        }
    }
    if(n % 2 == 1){
        matrix[n/2][n/2] = num * num;
    }
}

void output_the_matrix(int **matrix, int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(j != n - 1)
            printf("%d ", matrix[i][j]);
            else
            printf("%d", matrix[i][j]);
        }
        if(i != n-1)
        printf("\n");
    }
}
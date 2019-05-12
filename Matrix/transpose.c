// Finding transpose of a square matrix
// To do: Unit tests for rectangular but not square matrices
#include <stdio.h>
#define SIZE 5

int main(){
  int mat[SIZE][SIZE];
  int i=0, j=0;
  
  for(i=0; i<SIZE; i++){
    for(j=0; j<SIZE; j++){
      scanf("%d", &mat[i][j]);
    }
  }
  int newmat[SIZE][SIZE];
  for(i=0; i<SIZE; i++){
    for(j=0; j<SIZE; j++){
      newmat[j][i] = mat[i][j];
    }
  }
  
  /*
  printf("Original matrix: \n");
  for(i=0; i<SIZE; i++){
    for(j=0; j<SIZE; j++){
      printf("%d ", mat[i][j]);
    }
    printf("\n");
  }
  printf("Transposed matrix: \n");
  for(i=0; i<SIZE; i++){
    for(j=0; j<SIZE; j++){
      printf("%d ", newmat[i][j]);
    }
    printf("\n");
  }
  */
  
  return 0;
}

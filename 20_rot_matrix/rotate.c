#include <stdio.h>
#include <stdlib.h>

void rotate(char matrix[10][10]){
  char r_matrix[10][10];
  for (int i = 0; i < 10; i++){
    for (int j = 0; j <10; j++){
      r_matrix[j][9-i] = matrix[i][j];
    }
  }
  for (int i = 0; i < 10; i++){
    for (int j = 0; j <10; j++){
      matrix[i][j] = r_matrix[i][j];
    }
  }
  
}

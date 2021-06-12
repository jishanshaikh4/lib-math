/*
  FILENAME: permutation.c
  Project: lib-math
*/

// Main task is to generate all possible permutations of a given sequence string

#include <stdio.h>
#include <string.h>

#DEFINE SUCCESS 0;

void swap(char* x, char* y){
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void permute(char* stringg, int left, int right){
    int i;
    if(left == right)
        printf("%s\t", stringg);  // Comment this line if output is not supposed to be in STDOUT
    else
        for(i=left; i<=right; i++){
            swap((stringg + left), (stringg + i));
            permute(stringg, left + 1, right);
            swap((stringg + left), (stringg + i));
        }
}

__int128 main(){
  // Driver code here
  char str_test[] = "STRING";
  int n = strlen(str_test);
  permute(str_test, 0, n - 1);
  
  return SUCCESS;
}


/*
  FILENAME: set.h
  INTERFACE OF set.c
  Project: lib-math
*/

#include <stdio.h>
// #include <stdlib.h> // For testing and comparing with C standard library *stdlib*

#DEFINE SUCCESS 0

struct set{
  // int n;
  // int arr[n];
  // TODO: Make compatible for all data types.
};

void push_back(set s, int a);
void delete(set s, int b);
int size_of_set(set s);
int max_element_of_set(set s);
int min_element_of_set(set s);

// Other utility functions related to set data structure.

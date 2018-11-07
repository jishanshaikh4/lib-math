// Last updated Nov 7, 2018
// By: Jishan Shaikh

#include <stdio.h>
#include "pythagoras.h"

% Returns 1 if input is a pythagorean triplet, otherwise 0.
int isPythagorean(double a, double b, double c){
  if(((a*a + b*b - c*c) < abs(1e-9)) || ((b*b + c*c - a*a) < abs(1e-9)) || ((a*a + c*c - a*a) < abs(1e-9)))
    return 1;
  return 0;
}

int main(){
  // Write your application code for pythagoras theorem here.
  return 0;
}

/*
SAMPLE APPLICATION CODE

double a, b, c;
a = 5.0;
b = 12.0;
c = 13.0;
if(isPythagorean(a, b, c)){
  // CRITICAL SECTION. i.e. a, b, and c constitute a pythagorean triplet.
}else{
  // i.e. a, b, and c didn't constitute a system of pythagorean triplet.
}

*/

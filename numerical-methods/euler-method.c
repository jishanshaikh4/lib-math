/* Euler's Method
*  numerical-methods/euler-method.c
*  By: Jishan Shaikh
*  References: Numerical Methods using C by B. S. Grewal
*/
#include <stdio.h>
#include <math.h>

float df(float x, float y){
  return x+y;
}

int main(){
  float x0, x1, h, y0, y1;
  printf("Enter values of x0, y0, h, and x: ");
  scanf("%f %f %f %f", &x0, &y0, &h, &x);
  x1=x0;
  y1=y0;
  while(1){
    if(x1 > x)
      return;
    y1 += h*df(x1, y1);
    x1 += h;
    printf("When x = %3.1f, y = %4.2f\n", x1, y1);
  }
  return 0;
}
// End program euler-method.c

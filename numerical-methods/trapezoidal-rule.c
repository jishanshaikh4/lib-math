/* Trapezoidal Rule
*  numerical-methods/trapezoidal-rule.c
*  By: Jishan Shaikh
*  References: Numerical Methods using C by B. S. Grewal
*/

#include <stdio.h>
#include <math.h>

float y(float x){
    return 1/(1+x*x);
}

int main(){
    float x0, xn, h, s;
    int i, n;
    printf("Enter x0, xn, no. of subintervals\n");
    scanf("%f %f %d", &x0, &xn, &n);
    h=(xn-x0)/n;
    s=y(x0)+y(xn);
    for(i=0; i<=n-1; i++){
        s += 2*y(x0+i*h);
    }
    printf("Value of integral is %6.4f\n", (h/2)*s);
    return 0;
}
